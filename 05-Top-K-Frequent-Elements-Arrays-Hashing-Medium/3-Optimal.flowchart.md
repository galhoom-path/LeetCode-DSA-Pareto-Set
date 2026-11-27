# Optimal · Flowchart — Top K Frequent Elements

> Mirrors `3-Optimal.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Count["freq[num]++ for every num"]
  Count --> Buckets["buckets[0…n]<br/>buckets[f].push(value) for each (value, f)"]
  Buckets --> Walk["f = n"]
  Walk --> Cond{"f >= 1 and result.size() < k?"}
  Cond -->|no| Done([return result])
  Cond -->|yes| Each["for each value in buckets[f]"]
  Each --> Take["result.push(value)"]
  Take --> Full{"result.size() == k?"}
  Full -->|yes| Next["f--"]
  Full -->|no| MoreV{"more values in bucket?"}
  MoreV -->|yes| Each
  MoreV -->|no| Next
  Next --> Cond
```

**Time / space (from the C++ comments):** O(n) / O(n)
