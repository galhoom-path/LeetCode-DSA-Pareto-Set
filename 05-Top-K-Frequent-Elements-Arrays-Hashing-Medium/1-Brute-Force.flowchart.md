# Brute Force · Flowchart — Top K Frequent Elements

> Mirrors `1-Brute-Force.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Count["freq[num]++ for every num"]
  Count --> Pairs["byFreq = (freq, value) for every distinct value"]
  Pairs --> Sort["sort byFreq descending"]
  Sort --> Take["for i = 0 … k-1:<br/>result.push(byFreq[i].value)"]
  Take --> Done([return result])
```

**Time / space (from the C++ comments):** O(n + u log u) / O(u)
