# Brute Force · Flowchart — Product of Array Except Self

> Mirrors `1-Brute-Force.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> LoopI["for i = 0 … n-1"]
  LoopI --> Init["product = 1"]
  Init --> LoopJ["for j = 0 … n-1"]
  LoopJ --> Skip{"j != i?"}
  Skip -->|yes| Mul["product *= nums[j]"]
  Skip -->|no| MoreJ{"more j?"}
  Mul --> MoreJ
  MoreJ -->|yes| LoopJ
  MoreJ -->|no| Store["answer[i] = product"]
  Store --> MoreI{"more i?"}
  MoreI -->|yes| LoopI
  MoreI -->|no| Done([return answer])
```

**Time / space (from the C++ comments):** O(n²) / O(1) extra
