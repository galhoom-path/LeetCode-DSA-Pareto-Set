# Optimal · Flowchart — Product of Array Except Self

> Mirrors `3-Optimal.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Init["answer[n] = 1"]
  Init --> Left["for i = 1 … n-1:<br/>answer[i] = answer[i-1] * nums[i-1]"]
  Left --> Suffix["suffix = 1"]
  Suffix --> Loop["for i = n-1 … 0"]
  Loop --> Apply["answer[i] *= suffix<br/>suffix *= nums[i]"]
  Apply --> More{"more i?"}
  More -->|yes| Loop
  More -->|no| Done([return answer])
```

**Time / space (from the C++ comments):** O(n) / O(1) extra
