# Optimized · Flowchart — Valid Anagram

> Mirrors `2-Optimized.c++` · Mermaid (GitHub-rendered) · maintained by Cursor AI

```mermaid
flowchart TD
  Start([Start]) --> Len{"len(s) == len(t)?"}
  Len -->|no| False([return false])
  Len -->|yes| SortS["sort(s)"]
  SortS --> SortT["sort(t)"]
  SortT --> Eq{"s == t?"}
  Eq -->|yes| True([return true])
  Eq -->|no| False
```

**Time / space (from the C++ comments):** O(n log n) / O(log n) typical sort stack
