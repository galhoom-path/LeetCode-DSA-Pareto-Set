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

$ErrorActionPreference = "Continue"

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
        $hit = Get-ChildItem -Path $root -Filter "g++.exe" -Recurse -ErrorAction SilentlyContinue |
            Select-Object -First 1
        if ($hit) { return $hit.FullName }
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
# .c++ → strip the full suffix (GetFileNameWithoutExtension alone is unreliable here)
$base = [System.IO.Path]::GetFileName($src) -replace '\.c\+\+$', ''
$exe = Join-Path $outDir "$base.exe"

Write-Host "Compiler: $gpp" -ForegroundColor DarkGray
Write-Host "Source:   $src"
Write-Host "Output:   $exe"
Write-Host ""

# Avoid "Permission denied" if a previous .exe is locked
if (Test-Path -LiteralPath $exe) {
    try { Remove-Item -LiteralPath $exe -Force -ErrorAction Stop }
    catch {
        Write-Host "Cannot overwrite $exe (file in use?). Close any running copy and retry." -ForegroundColor Red
        exit 1
    }
}

$compileOutput = & $gpp -std=c++17 -O2 -Wall -Wextra -o $exe $src 2>&1
$compileCode = $LASTEXITCODE
if ($null -eq $compileCode) { $compileCode = 0 }

if ($compileOutput) {
    $compileOutput | ForEach-Object { Write-Host $_ }
}

if ($compileCode -ne 0) {
    Write-Host "Compile failed (exit $compileCode)." -ForegroundColor Red
    exit $compileCode
}

if (-not (Test-Path -LiteralPath $exe)) {
    Write-Host "Compile reported success but exe was not created: $exe" -ForegroundColor Red
    exit 1
}

Write-Host "--- run ---" -ForegroundColor Cyan
& $exe
$runCode = $LASTEXITCODE
if ($null -eq $runCode) { $runCode = 0 }
Write-Host "--- exit $runCode ---" -ForegroundColor Cyan
exit $runCode
