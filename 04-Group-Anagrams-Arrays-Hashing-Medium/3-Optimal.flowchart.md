# Optimal · Flowchart — Group Anagrams

> Mirrors `3-Optimal.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Loop["for each word in strs"]
  Loop --> Zero["key = 26 zero chars"]
  Zero --> Count["for each ch in word:<br/>key[ch - 'a']++"]
  Count --> Bucket["groupsByKey[key].push(word)"]
  Bucket --> More{"more words?"}
  More -->|yes| Loop
  More -->|no| Collect["move every bucket into groups"]
  Collect --> Done([return groups])
```

**Time / space (from the C++ comments):** O(n · k) / O(n · k)
