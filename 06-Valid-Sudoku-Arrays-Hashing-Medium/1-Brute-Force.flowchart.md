# Brute Force · Flowchart — Valid Sudoku

> Mirrors `1-Brute-Force.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Cell["for each cell (r, c)"]
  Cell --> Empty{"board[r][c] == '.'?"}
  Empty -->|yes| More{"more cells?"}
  Empty -->|no| RowCol["for k = 0 … 8:<br/>board[r][k] or board[k][c] repeats digit?"]
  RowCol -->|yes| False([return false])
  RowCol -->|no| Box["scan the 3×3 box of (r, c):<br/>another cell repeats digit?"]
  Box -->|yes| False
  Box -->|no| More
  More -->|yes| Cell
  More -->|no| True([return true])
```

**Time / space (from the C++ comments):** O(n³) for n×n (fixed 9×9) / O(1)
