# 16 · Ready For The 49 — Mastery Checklist

This prep pack is a **finished study reference** for:

1. Entering **problem solving + LeetCode** as a beginner  
2. Being ready for **these 49 problems** specifically  

When most boxes are honest **yes**, open `01-Contains-Duplicate-…` (gold-standard folder) and begin:

1. **You:** `1-Brute-Force.c++` → `2-Optimized.c++` → `3-Optimal.c++`  
2. **Cursor AI:** matching `*.flowchart.md` (Mermaid) for each approach  

Then continue **one problem at a time** — create the next folder only when you start that problem.

---

## A · World entry (newcomers)

- [ ] I can explain what **interview-style problem solving** is  
- [ ] I know what **LeetCode** / an online judge does (Run vs Submit)  
- [ ] I know what **TLE / WA / Accepted** mean  
- [ ] I have a ritual to **read** a problem (goal → I/O → examples → constraints → edges)  
- [ ] I know the playbook: **Understand → Brute → Improve → Test → Big O**  

## B · Vocabulary

- [ ] I can define **time complexity**, **space complexity**, **Big O**  
- [ ] I know **O(1), O(log n), O(n), O(n log n), O(n²)** by feel  
- [ ] I can define **edge case** and list 5 universal ones  

## C · Patterns (name + one sentence)

- [ ] Arrays & Hashing  
- [ ] Two Pointers  
- [ ] Sliding Window  
- [ ] Stack / monotonic stack  
- [ ] Binary Search / rotated array  
- [ ] Linked List / fast-slow / LRU idea  
- [ ] Trees / BST / DFS / BFS  
- [ ] Heap / kth largest with size-k min-heap  
- [ ] Graphs / flood fill / topo & cycle  

## D · C++ track (this repo) — or “I can translate”

- [ ] I recognize a LeetCode `Solution` signature  
- [ ] I can loop a `vector` and pass by reference `&`  
- [ ] I know `unordered_set/map`, `stack`, `queue`, `priority_queue`  
- [ ] I null-check before `->` on list/tree nodes  
- [ ] **Other language:** I can map each C++ snippet to my language  

## E · Map & tools

- [ ] I can find any `#1–49` on [05-Pattern-Map](./05-Pattern-Map-For-The-49.md)  
- [ ] I recognize `ListNode` / `TreeNode`  

## F · Mindset

- [ ] Before coding I can state: brute idea, better idea, 2 edges, Big O  
- [ ] I understand: **prep is done here** · **solving happens in 01…49** (I write C++; Cursor draws Mermaid charts)  
- [ ] I know this playbook also works on **future** LeetCode problems outside the 49  
- [ ] I will not leave empty stub files for problems I have not started yet  

---

## If something is still fuzzy

| Fuzzy about… | Re-read |
|:---|:---|
| What is problem solving / LeetCode? | [01](./01-Welcome-To-The-World.md) |
| How to read & practice | [02](./02-How-To-Practice.md) |
| Big O / edges | [03](./03-Big-O-And-Edges.md) |
| C++ for this repo | [04](./04-Cpp-For-The-49.md) |
| Which pattern | [05](./05-Pattern-Map-For-The-49.md) |
| A category | matching **06–15** |
| DFS/BFS | [12](./12-Traversal-Recursion-Queue.md) |
| Deeper docs | [Sources below](#sources) |

---

## Sources

Use these when a sheet is clear but you want a primary reference.  
Stay inside topics that appear in the **49** (plus general LeetCode orientation).

**Brand new?** Finish [01–02](./01-Welcome-To-The-World.md) before diving into long docs here.

---

## Complexity

| Resource | Use |
|:---|:---|
| [Big O Cheat Sheet](https://www.bigocheatsheet.com/) | Structures × operations visuals |
| [Wikipedia — Big O notation](https://en.wikipedia.org/wiki/Big_O_notation) | Formal wording |

---

## C++ containers (match solutions)

| Topic | Link |
|:---|:---|
| `unordered_map` | https://en.cppreference.com/w/cpp/container/unordered_map |
| `unordered_set` | https://en.cppreference.com/w/cpp/container/unordered_set |
| `stack` | https://en.cppreference.com/w/cpp/container/stack |
| `queue` | https://en.cppreference.com/w/cpp/container/queue |
| `priority_queue` | https://en.cppreference.com/w/cpp/container/priority_queue |
| `vector` | https://en.cppreference.com/w/cpp/container/vector |

---

## Algorithms

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

## Pareto list credit

- **The Pareto Problem Set** — Aman · https://www.youtube.com/@AmanManazir  

---

---

```text
  ✅ Prep pack = complete on-ramp + complete briefing for the 49
  ▶️ Next action = solve problems in numbered folders
  🔁 Same playbook later = any new LeetCode / interview problem
```

**Start:** root checklist → problem **#1 Contains Duplicate**.
