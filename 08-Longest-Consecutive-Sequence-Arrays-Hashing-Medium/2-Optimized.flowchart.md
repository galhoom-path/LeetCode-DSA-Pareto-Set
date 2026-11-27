# Optimized · Flowchart — Longest Consecutive Sequence

> Mirrors `2-Optimized.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Empty{"nums empty?"}
  Empty -->|yes| Zero([return 0])
  Empty -->|no| Sort["sort(nums)<br/>best = current = 1"]
  Sort --> Loop["for i = 1 … n-1"]
  Loop --> Dup{"nums[i] == nums[i-1]?"}
  Dup -->|yes| More{"more i?"}
  Dup -->|no| Next{"nums[i] == nums[i-1] + 1?"}
  Next -->|yes| Inc["current++"]
  Next -->|no| Reset["current = 1"]
  Inc --> Best["best = max(best, current)"]
  Reset --> Best
  Best --> More
  More -->|yes| Loop
  More -->|no| Done([return best])
```

**Time / space (from the C++ comments):** O(n log n) / O(log n) typical sort stack
