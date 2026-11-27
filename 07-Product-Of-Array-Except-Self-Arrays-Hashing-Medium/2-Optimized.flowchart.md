# Optimized · Flowchart — Product of Array Except Self

> Mirrors `2-Optimized.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Init["prefix[n] = 1, suffix[n] = 1"]
  Init --> Left["for i = 1 … n-1:<br/>prefix[i] = prefix[i-1] * nums[i-1]"]
  Left --> Right["for i = n-2 … 0:<br/>suffix[i] = suffix[i+1] * nums[i+1]"]
  Right --> Combine["for i = 0 … n-1:<br/>answer[i] = prefix[i] * suffix[i]"]
  Combine --> Done([return answer])
```

**Time / space (from the C++ comments):** O(n) / O(n)
