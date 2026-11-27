# Optimal · Flowchart — Valid Palindrome

> Mirrors `3-Optimal.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Init["L = 0, R = n-1"]
  Init --> Loop{"L < R?"}
  Loop -->|no| True([return true])
  Loop -->|yes| SkipL["while L < R and s[L] not alnum: L++"]
  SkipL --> SkipR["while L < R and s[R] not alnum: R--"]
  SkipR --> Cmp{"tolower(s[L]) != tolower(s[R])?"}
  Cmp -->|yes| False([return false])
  Cmp -->|no| Step["L++, R--"]
  Step --> Loop
```

**Time / space (from the C++ comments):** O(n) / O(1)
