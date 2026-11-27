# Optimized · Flowchart — Top K Frequent Elements

> Mirrors `2-Optimized.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Count["freq[num]++ for every num"]
  Count --> Loop["for each (value, f) in freq"]
  Loop --> Push["minHeap.push((f, value))"]
  Push --> Over{"minHeap.size() > k?"}
  Over -->|yes| Pop["minHeap.pop() — drop least frequent"]
  Over -->|no| More{"more values?"}
  Pop --> More
  More -->|yes| Loop
  More -->|no| Drain["pop every heap entry into result"]
  Drain --> Done([return result])
```

**Time / space (from the C++ comments):** O(n + u log k) / O(u + k)
