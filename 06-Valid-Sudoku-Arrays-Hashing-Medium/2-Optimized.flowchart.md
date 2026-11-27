# Optimized · Flowchart — Valid Sudoku

> Mirrors `2-Optimized.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Rows["for each row: fresh set seen<br/>addDigit for its 9 cells"]
  Rows --> RowOk{"any repeat?"}
  RowOk -->|yes| False([return false])
  RowOk -->|no| Cols["for each column: fresh set seen<br/>addDigit for its 9 cells"]
  Cols --> ColOk{"any repeat?"}
  ColOk -->|yes| False
  ColOk -->|no| Boxes["for each box b = 0 … 8: fresh set seen<br/>addDigit for its 9 cells"]
  Boxes --> BoxOk{"any repeat?"}
  BoxOk -->|yes| False
  BoxOk -->|no| True([return true])
  Add["addDigit(seen, cell):<br/>'.' → ok · in seen → repeat · else insert"] -.-> Rows
```

**Time / space (from the C++ comments):** O(n²) for n×n / O(n)
