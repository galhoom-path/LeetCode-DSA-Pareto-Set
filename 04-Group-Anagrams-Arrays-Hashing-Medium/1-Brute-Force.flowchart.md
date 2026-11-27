# Brute Force · Flowchart — Group Anagrams

> Mirrors `1-Brute-Force.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Init["used[0…n-1] = false"]
  Init --> LoopI["for i = 0 … n-1"]
  LoopI --> UsedI{"used[i]?"}
  UsedI -->|yes| MoreI{"more i?"}
  UsedI -->|no| NewGroup["used[i] = true<br/>group = {strs[i]}"]
  NewGroup --> LoopJ["for j = i+1 … n-1"]
  LoopJ --> Match{"!used[j] and isAnagram(strs[i], strs[j])?"}
  Match -->|yes| Add["used[j] = true<br/>group.push(strs[j])"]
  Match -->|no| MoreJ{"more j?"}
  Add --> MoreJ
  MoreJ -->|yes| LoopJ
  MoreJ -->|no| Push["groups.push(group)"]
  Push --> MoreI
  MoreI -->|yes| LoopI
  MoreI -->|no| Done([return groups])
```

**Time / space (from the C++ comments):** O(n² · k) / O(n)
