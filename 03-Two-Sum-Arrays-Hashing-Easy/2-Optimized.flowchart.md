# Optimized · Flowchart — Two Sum

> Mirrors `2-Optimized.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Build["pairs = (nums[i], i) for every i"]
  Build --> Sort["sort pairs by value"]
  Sort --> Init["L = 0, R = n-1"]
  Init --> Loop{"L < R?"}
  Loop -->|no| None(["return {} (unreachable)"])
  Loop -->|yes| Sum["sum = pairs[L].value + pairs[R].value"]
  Sum --> Eq{"sum == target?"}
  Eq -->|yes| Found(["return {pairs[L].index, pairs[R].index}"])
  Eq -->|no| Less{"sum < target?"}
  Less -->|yes| IncL["L++"]
  Less -->|no| DecR["R--"]
  IncL --> Loop
  DecR --> Loop
```

**Time / space (from the C++ comments):** O(n log n) / O(n)
