# Optimal · Flowchart — Longest Consecutive Sequence

> Mirrors `3-Optimal.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Set["values = unordered_set(nums)<br/>best = 0"]
  Set --> Loop["for each x in values"]
  Loop --> Inside{"values.count(x - 1)?"}
  Inside -->|yes| More{"more x?"}
  Inside -->|no| Walk["length = 1"]
  Walk --> Has{"values.count(x + length)?"}
  Has -->|yes| Grow["length++"]
  Grow --> Has
  Has -->|no| Best["best = max(best, length)"]
  Best --> More
  More -->|yes| Loop
  More -->|no| Done([return best])
```

**Time / space (from the C++ comments):** O(n) average / O(n)
