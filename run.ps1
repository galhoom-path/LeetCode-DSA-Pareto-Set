<#
.SYNOPSIS
  Compile and run a problem approach file (.c++).

.EXAMPLE
  .\run.ps1
  .\run.ps1 -Problem 01 -Approach 1
  .\run.ps1 -Problem 01 -Approach 3
  .\run.ps1 -File .\01-Contains-Duplicate-Arrays-Hashing-Easy\1-Brute-Force.c++
#>
[CmdletBinding()]
param(
    [string]$Problem = "01",
    [ValidateSet("1", "2", "3")]
    [string]$Approach = "1",
    [string]$File = ""
)

$ErrorActionPreference = "Stop"

function Find-GPlusPlus {
    $cmd = Get-Command g++ -ErrorAction SilentlyContinue
    if ($cmd) { return $cmd.Source }

    $candidates = @(
        "$env:LOCALAPPDATA\Microsoft\WinGet\Packages",
        "$env:ProgramFiles\mingw64\bin",
        "$env:ProgramFiles\Mingw-w64\*\mingw64\bin",
        "C:\mingw64\bin",
        "C:\WinLibs\mingw64\bin"
    )
    foreach ($root in $candidates) {
        Get-ChildItem -Path $root -Filter "g++.exe" -Recurse -ErrorAction SilentlyContinue |
            Select-Object -First 1 |
            ForEach-Object { return $_.FullName }
    }
    return $null
}

$gpp = Find-GPlusPlus
if (-not $gpp) {
    Write-Host "g++ not found. Install WinLibs MinGW (POSIX UCRT) then reopen the terminal." -ForegroundColor Red
    Write-Host "  winget install -e --id BrechtSanders.WinLibs.POSIX.UCRT"
    exit 1
}

$repoRoot = $PSScriptRoot
if (-not $File) {
    $folder = Get-ChildItem -Path $repoRoot -Directory |
        Where-Object { $_.Name -like "$Problem-*" } |
        Select-Object -First 1
    if (-not $folder) {
        Write-Host "No problem folder matching '$Problem-*' under $repoRoot" -ForegroundColor Red
        exit 1
    }
    $names = @{
        "1" = "1-Brute-Force.c++"
        "2" = "2-Optimized.c++"
        "3" = "3-Optimal.c++"
    }
    $File = Join-Path $folder.FullName $names[$Approach]
}

if (-not (Test-Path -LiteralPath $File)) {
    Write-Host "File not found: $File" -ForegroundColor Red
    exit 1
}

$src = (Resolve-Path -LiteralPath $File).Path
$outDir = Split-Path -Parent $src
$base = [System.IO.Path]::GetFileNameWithoutExtension($src)
$exe = Join-Path $outDir "$base.exe"

Write-Host "Compiler: $gpp" -ForegroundColor DarkGray
Write-Host "Source:   $src"
Write-Host "Output:   $exe"
Write-Host ""

& $gpp -std=c++17 -O2 -Wall -Wextra -o $exe $src
if ($LASTEXITCODE -ne 0) {
    Write-Host "Compile failed." -ForegroundColor Red
    exit $LASTEXITCODE
}

Write-Host "--- run ---" -ForegroundColor Cyan
& $exe
$runCode = $LASTEXITCODE
Write-Host "--- exit $runCode ---" -ForegroundColor Cyan
exit $runCode
