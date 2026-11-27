# Optimal · Flowchart — Valid Sudoku

> Mirrors `3-Optimal.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Init["rows[9] = cols[9] = boxes[9] = 0"]
  Init --> Cell["for each cell (r, c)"]
  Cell --> Empty{"board[r][c] == '.'?"}
  Empty -->|yes| More{"more cells?"}
  Empty -->|no| Bit["bit = 1 << (digit - '1')<br/>box = (r/3)*3 + c/3"]
  Bit --> Seen{"bit set in rows[r], cols[c] or boxes[box]?"}
  Seen -->|yes| False([return false])
  Seen -->|no| Set["set bit in rows[r], cols[c], boxes[box]"]
  Set --> More
  More -->|yes| Cell
  More -->|no| True([return true])
```

**Time / space (from the C++ comments):** O(n²) for n×n (fixed 81 cells) / O(n)
