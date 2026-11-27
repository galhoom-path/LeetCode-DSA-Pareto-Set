# Optimal · Flowchart — Two Sum

> Mirrors `3-Optimal.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Init["unordered_map indexOf<br/>reserve(n)"]
  Init --> Loop["for i = 0 … n-1"]
  Loop --> Need["need = target - nums[i]"]
  Need --> Hit{"indexOf.count(need)?"}
  Hit -->|yes| Found(["return {indexOf[need], i}"])
  Hit -->|no| Store["indexOf[nums[i]] = i"]
  Store --> More{"more i?"}
  More -->|yes| Loop
  More -->|no| None(["return {} (unreachable)"])
```

**Time / space (from the C++ comments):** O(n) average / O(n)
