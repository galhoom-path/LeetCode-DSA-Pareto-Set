# Optimal · Flowchart — Two Sum II — Input Array Is Sorted

> Mirrors `3-Optimal.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Init["L = 0, R = n-1"]
  Init --> Loop{"L < R?"}
  Loop -->|no| None(["return {} (unreachable)"])
  Loop -->|yes| Sum["sum = numbers[L] + numbers[R]"]
  Sum --> Eq{"sum == target?"}
  Eq -->|yes| Found(["return {L+1, R+1}"])
  Eq -->|no| Less{"sum < target?"}
  Less -->|yes| IncL["L++"]
  Less -->|no| DecR["R--"]
  IncL --> Loop
  DecR --> Loop
```

**Time / space (from the C++ comments):** O(n) / O(1)
