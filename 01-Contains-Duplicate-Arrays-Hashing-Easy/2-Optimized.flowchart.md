# Optimized · Flowchart — Contains Duplicate

> Mirrors `2-Optimized.c++` · Mermaid (GitHub-rendered) · maintained by Cursor AI

```mermaid
flowchart TD
  Start([Start]) --> Sort["sort(nums)"]
  Sort --> Loop["for i = 0 … n-2"]
  Loop --> Adj{"nums[i] == nums[i+1]?"}
  Adj -->|yes| True([return true])
  Adj -->|no| More{"more i?"}
  More -->|yes| Loop
  More -->|no| False([return false])
```

**Time / space (from the C++ comments):** O(n log n) / O(log n) typical sort stack
