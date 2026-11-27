# Optimized · Flowchart — Group Anagrams

> Mirrors `2-Optimized.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Loop["for each word in strs"]
  Loop --> Key["key = sorted copy of word"]
  Key --> Bucket["groupsByKey[key].push(word)"]
  Bucket --> More{"more words?"}
  More -->|yes| Loop
  More -->|no| Collect["move every bucket into groups"]
  Collect --> Done([return groups])
```

**Time / space (from the C++ comments):** O(n · k log k) / O(n · k)
