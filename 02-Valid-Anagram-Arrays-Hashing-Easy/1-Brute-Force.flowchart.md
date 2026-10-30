# Brute Force · Flowchart — Valid Anagram

> Mirrors `1-Brute-Force.c++` · Mermaid (GitHub-rendered) · maintained by Cursor AI

```mermaid
flowchart TD
  Start([Start]) --> Len{"len(s) == len(t)?"}
  Len -->|no| False([return false])
  Len -->|yes| Copy["remaining = copy of t"]
  Copy --> LoopI["for each char s[i]"]
  LoopI --> LoopJ["scan remaining for s[i]"]
  LoopJ --> Hit{"found unused match?"}
  Hit -->|no| False
  Hit -->|yes| Mark["mark slot used"]
  Mark --> MoreI{"more s[i]?"}
  MoreI -->|yes| LoopI
  MoreI -->|no| True([return true])
```

**Time / space (from the C++ comments):** O(n²) / O(n)
