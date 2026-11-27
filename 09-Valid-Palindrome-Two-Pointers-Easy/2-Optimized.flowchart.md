# Optimized · Flowchart — Valid Palindrome

> Mirrors `2-Optimized.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Clean["cleaned = lowercase alphanumerics of s"]
  Clean --> Init["L = 0, R = cleaned.size() - 1"]
  Init --> Loop{"L < R?"}
  Loop -->|no| True([return true])
  Loop -->|yes| Cmp{"cleaned[L] != cleaned[R]?"}
  Cmp -->|yes| False([return false])
  Cmp -->|no| Step["L++, R--"]
  Step --> Loop
```

**Time / space (from the C++ comments):** O(n) / O(n)
