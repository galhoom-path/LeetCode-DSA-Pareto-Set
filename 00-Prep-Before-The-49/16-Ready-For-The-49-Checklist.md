# ✅ 16 · Ready For The 49 — Mastery Checklist


### ✅ My progress · this sheet

- [ ] I **read** this sheet end-to-end
- [ ] I can **explain** the main ideas without looking

> When both are checked → also tick this sheet in [PROGRESS.md](../PROGRESS.md#prep-sheets--your-reading-progress) and refresh the bars.

---
> 📌 **At a glance**  
> This pack is finished study material for: (1) entering PS + LeetCode, and (2) being ready for **these 49**.  
> When most boxes are honest **yes**, start solving — one problem at a time.

### How you start problem folders

1. **You** write `1-Brute-Force.c++` → `2-Optimized.c++` → `3-Optimal.c++`  
2. **Cursor AI** writes the matching `*.flowchart.md` (Mermaid)  

Gold standard: `01-Contains-Duplicate-…`. Create the next folder only when you start that problem.

---

## 🌍 A · World entry (newcomers)

- [ ] I can explain what **interview-style problem solving** is  
- [ ] I know what **LeetCode** / an online judge does (Run vs Submit)  
- [ ] I know what **TLE / WA / Accepted** mean  
- [ ] I have a ritual to **read** a problem (goal → I/O → examples → constraints → edges)  
- [ ] I know the solve playbook: **Understand → Brute → Improve → Test → Big O**  
- [ ] I know the live 6 steps (or I will tick **G** below)  

## 🔤 B · Vocabulary

- [ ] I can define **time complexity**, **space complexity**, **Big O**  
- [ ] I know **O(1), O(log n), O(n), O(n log n), O(n²)** by feel  
- [ ] I can define **edge case** and list 5 universal ones  

## 🧩 C · Patterns (name + one sentence)

- [ ] Arrays & Hashing  
- [ ] Two Pointers  
- [ ] Sliding Window  
- [ ] Stack / monotonic stack  
- [ ] Binary Search / rotated array  
- [ ] Linked List / fast-slow / LRU idea  
- [ ] Trees / BST / DFS / BFS  
- [ ] Heap / kth largest with size-k min-heap  
- [ ] Graphs / flood fill / topo & cycle  

## 💻 D · C++ track (this repo) — or “I can translate”

- [ ] I recognize a LeetCode `Solution` signature  
- [ ] I can loop a `vector` and pass by reference `&`  
- [ ] I know `unordered_set/map`, `stack`, `queue`, `priority_queue`  
- [ ] I null-check before `->` on list/tree nodes  
- [ ] **Other language:** I can map each C++ snippet to my language  

## 🗺️ E · Map & tools

- [ ] I can find any `#1–49` on [05-Pattern-Map](./05-Pattern-Map-For-The-49.md)  
- [ ] I recognize `ListNode` / `TreeNode`  

## 🧠 F · Mindset

- [ ] Before coding I can state: brute idea, better idea, 2 edges, Big O  
- [ ] I understand: **prep is done here** · **solving happens in 01…49** (I write C++; Cursor draws Mermaid charts)  
- [ ] I know this playbook also works on **future** LeetCode problems outside the 49  
- [ ] I will not leave empty stub files for problems I have not started yet  

## 🎙️ G · Live coding habits (technical)

- [ ] I can run the **6 steps**: clarify → examples → brute → optimize → code → test  
- [ ] I ask constraints instead of assuming “non-empty / all positive / …”  
- [ ] I can time-box practice and still narrate my thinking  

---

## 🔍 If something is still fuzzy

| Fuzzy about… | Re-read |
|:---|:---|
| What is problem solving / LeetCode? | [01](./01-Welcome-To-The-World.md) |
| How to read & practice | [02](./02-How-To-Practice.md) |
| Live coding 6 steps | [02 · Live interview](./02-How-To-Practice.md#live-coding-interview--6-steps) |
| Big O / edges | [03](./03-Big-O-And-Edges.md) |
| C++ for this repo | [04](./04-Cpp-For-The-49.md) |
| Which pattern | [05](./05-Pattern-Map-For-The-49.md) |
| A category | matching **06–15** |
| DFS/BFS | [12](./12-Traversal-Recursion-Queue.md) |
| Deeper docs | [Sources below](#sources) |

---

## 📚 Sources

Use these when a sheet is clear but you want a primary reference.  
Stay inside topics that appear in the **49** (plus general LeetCode orientation).

**Brand new?** Finish [01–02](./01-Welcome-To-The-World.md) before diving into long docs here.

---

## ⏱️ Complexity

| Resource | Use |
|:---|:---|
| [Big O Cheat Sheet](https://www.bigocheatsheet.com/) | Structures × operations visuals |
| [Wikipedia — Big O notation](https://en.wikipedia.org/wiki/Big_O_notation) | Formal wording |

---

## C++ reference (cppreference)

Official STL docs — use when a sketch in [04](./04-Cpp-For-The-49.md) is clear but you need exact operations / complexity.

**Hub:** [https://en.cppreference.com/w/cpp](https://en.cppreference.com/w/cpp)

### Containers & adaptors (used in the 49)

| Topic | Link | Where in the 49 |
|:---|:---|:---|
| `vector` | https://en.cppreference.com/w/cpp/container/vector | Arrays, grids, answers |
| `string` | https://en.cppreference.com/w/cpp/string/basic_string | Palindrome, substrings (#9, #14–15) |
| `unordered_set` | https://en.cppreference.com/w/cpp/container/unordered_set | Duplicates, visited (#1, #8, …) |
| `unordered_map` | https://en.cppreference.com/w/cpp/container/unordered_map | Counts, Two Sum, clone map |
| `stack` | https://en.cppreference.com/w/cpp/container/stack | Parentheses, monotonic (#16–18) |
| `queue` | https://en.cppreference.com/w/cpp/container/queue | BFS, Kahn (#35–36, #48–49) |
| `priority_queue` | https://en.cppreference.com/w/cpp/container/priority_queue | Top-K, stones (#5, #40–42) |

### Algorithms & helpers (used in the 49)

| Topic | Link | Use |
|:---|:---|:---|
| `<algorithm>` overview | https://en.cppreference.com/w/cpp/algorithm | Library index |
| `sort` | https://en.cppreference.com/w/cpp/algorithm/sort | 3Sum, sort+scan (#2 Optimized style) |
| `max` | https://en.cppreference.com/w/cpp/algorithm/max | Running best, tree depths |
| `min` | https://en.cppreference.com/w/cpp/algorithm/min | Areas, bounds |
| `greater` (min-heap) | https://en.cppreference.com/w/cpp/utility/functional/greater | `priority_queue<…, greater<int>>` |
| `isalnum` | https://en.cppreference.com/w/cpp/string/byte/isalnum | Valid Palindrome (#9) |
| `tolower` | https://en.cppreference.com/w/cpp/string/byte/tolower | Valid Palindrome (#9) |

Skip the rest of cppreference for now (templates deep dive, concurrency, ranges… — not needed for these 49).

---

## Algorithms (ideas, language-agnostic)

| Topic | Link |
|:---|:---|
| Binary search | https://en.wikipedia.org/wiki/Binary_search_algorithm |
| Graph traversal | https://en.wikipedia.org/wiki/Graph_traversal |
| Topological sorting | https://en.wikipedia.org/wiki/Topological_sorting |
| Floyd cycle detection | https://en.wikipedia.org/wiki/Cycle_detection#Floyd's_tortoise_and_hare |

---

## Ground truth for each problem

- Links in the **root README checklist** (constraints + examples)  
- This repo’s three solution files per problem  

---

## Interview practice (technical only)

| Resource | What we take from it |
|:---|:---|
| [Manara — How to Land a Job…](https://support.manara.tech/knowledge/how-to-land-a-job-at-a-global-tech-company) | Coding-interview habits: clarify, examples, brute → optimize, narrate, test (see [02](./02-How-To-Practice.md#live-coding-interview--6-steps)) |
| [Manara — improving coding skills](https://support.manara.tech/knowledge/improving-your-coding-skills) | Timed LeetCode practice; peer mocks if available |

We **do not** pull behavioral STAR / full career curriculum into this repo — that stays outside the Pareto-49 goal.

## Pareto list credit

- **The Pareto Problem Set** — Aman · https://www.youtube.com/@AmanManazir  

---

```text
  ✅ Prep pack = complete on-ramp + complete briefing for the 49
  ▶️ Next action = solve problems in numbered folders
  🔁 Same playbook later = any new LeetCode / interview problem
```

**Start:** root checklist → problem **#1 Contains Duplicate**.
