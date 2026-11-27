# Brute Force · Flowchart — Longest Consecutive Sequence

> Mirrors `1-Brute-Force.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Init["best = 0"]
  Init --> Loop["for each x in nums"]
  Loop --> Run["length = 1, next = x + 1"]
  Run --> Has{"contains(nums, next)?<br/>(linear scan)"}
  Has -->|yes| Grow["length++, next++"]
  Grow --> Has
  Has -->|no| Best["best = max(best, length)"]
  Best --> More{"more x?"}
  More -->|yes| Loop
  More -->|no| Done([return best])
```

**Time / space (from the C++ comments):** O(n³) / O(1)
