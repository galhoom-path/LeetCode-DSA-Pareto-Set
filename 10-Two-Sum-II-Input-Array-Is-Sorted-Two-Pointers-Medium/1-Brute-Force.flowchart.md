# Brute Force · Flowchart — Two Sum II — Input Array Is Sorted

> Mirrors `1-Brute-Force.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> LoopI["for i = 0 … n-1"]
  LoopI --> LoopJ["for j = i+1 … n-1"]
  LoopJ --> Cmp{"numbers[i] + numbers[j] == target?"}
  Cmp -->|yes| Found(["return {i+1, j+1}"])
  Cmp -->|no| MoreJ{"more j?"}
  MoreJ -->|yes| LoopJ
  MoreJ -->|no| MoreI{"more i?"}
  MoreI -->|yes| LoopI
  MoreI -->|no| None(["return {} (unreachable)"])
```

**Time / space (from the C++ comments):** O(n²) / O(1)
