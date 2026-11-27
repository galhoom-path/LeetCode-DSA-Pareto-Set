# Optimized · Flowchart — Two Sum II — Input Array Is Sorted

> Mirrors `2-Optimized.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> LoopI["for i = 0 … n-1"]
  LoopI --> Need["need = target - numbers[i]<br/>lo = i+1, hi = n-1"]
  Need --> Search{"lo <= hi?"}
  Search -->|no| MoreI{"more i?"}
  Search -->|yes| Mid["mid = lo + (hi - lo) / 2"]
  Mid --> Eq{"numbers[mid] == need?"}
  Eq -->|yes| Found(["return {i+1, mid+1}"])
  Eq -->|no| Less{"numbers[mid] < need?"}
  Less -->|yes| Right["lo = mid + 1"]
  Less -->|no| Left["hi = mid - 1"]
  Right --> Search
  Left --> Search
  MoreI -->|yes| LoopI
  MoreI -->|no| None(["return {} (unreachable)"])
```

**Time / space (from the C++ comments):** O(n log n) / O(1)
