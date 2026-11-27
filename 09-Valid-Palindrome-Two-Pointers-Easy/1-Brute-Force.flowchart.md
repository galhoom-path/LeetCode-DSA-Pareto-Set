# Brute Force · Flowchart — Valid Palindrome

> Mirrors `1-Brute-Force.c++` · Mermaid (GitHub-rendered) · AI-authored reference (`reference-solutions` branch)

```mermaid
flowchart TD
  Start([Start]) --> Loop["for each ch in s"]
  Loop --> Alnum{"isalnum(ch)?"}
  Alnum -->|yes| Keep["cleaned += tolower(ch)"]
  Alnum -->|no| More{"more ch?"}
  Keep --> More
  More -->|yes| Loop
  More -->|no| Rev["reversed = reverse(cleaned)"]
  Rev --> Eq{"cleaned == reversed?"}
  Eq -->|yes| True([return true])
  Eq -->|no| False([return false])
```

**Time / space (from the C++ comments):** O(n) / O(n)
