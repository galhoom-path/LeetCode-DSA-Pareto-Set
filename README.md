> 🛤️ **Part of [Galhoom Path](https://github.com/galhoom-path)** · Track 2 — Problem Solving  
> This repository belongs to the **Galhoom Path** organization (**Study** · **Problem Solving** · **Interview Prep** · **Projects**).  
> → [Organization home](https://github.com/galhoom-path)

# 🧠 LeetCode DSA Pareto Set

> **"Master the 20% of problems that give you 80% of the results."**

Structured path through the **49 essential LeetCode problems** from **The Pareto Problem Set** — the high-ROI DSA patterns that show up again and again in interviews.

Solutions are in **C++**. Ideas are language-agnostic (translate the snippets if you use something else).

---

## 📊 Progress (live tracker)

> **You** tick boxes as you finish. Full dashboard → **[`PROGRESS.md`](./PROGRESS.md)**

| Track | Bar | Count |
|:---|:---|:---:|
| Prep sheets (read + understand) | `░░░░░░░░░░` | **0 / 17** |
| Pareto 49 (solved) | `█░░░░░░░░░` | **1 / 49** |
| Combined | `░░░░░░░░░░` | **1 / 66** |

```text
  Prep     [░░░░░░░░░░]  0/17   ← tick each sheet as you finish reading
  Problems [█░░░░░░░░░]  1/49   ← #1 done; continue one at a time
```

**How you know a prep file is done:** open it → tick **Read** + **Explain** at the top → tick the same line in [`PROGRESS.md`](./PROGRESS.md) → refresh the bars.

### Repo infrastructure (not your study %)

| Piece | Status |
|:---|:---|
| Prep pack content [`00-…`](./00-Prep-Before-The-49/) | ✅ Written (`00`→`16`) |
| Live coding habits | ✅ In prep ([6 steps](./00-Prep-Before-The-49/02-How-To-Practice.md#live-coding-interview--6-steps)) |
| Gold standard **#1** | ✅ [`01-Contains-Duplicate-…`](./01-Contains-Duplicate-Arrays-Hashing-Easy/) |
| Empty stubs | ❌ Never |

---

## 🎒 Start here if you are new

Not everyone who opens this repo already knows Big O, edge cases, or the patterns behind these 49 problems.

**Before the checklist below**, study the complete reference pack:

### → [`00-Prep-Before-The-49/`](./00-Prep-Before-The-49/)

| You get… | Sheets |
|:---|:---|
| World + how to read & practice | `00`–`02` |
| Big O + edges | `03` |
| C++ enough for this repo | `04` |
| Map of all 49 + pattern sheets | `05`–`15` (DFS/BFS **before** trees/graphs) |
| Ready checklist + sources | `16` |

```text
  00-Prep-Before-The-49/   ← read first (complete)
           ↓
  01…49 problem folders    ← solve in C++ (create folder when you start)
```

Full study order: [`00-Prep-Before-The-49/README.md`](./00-Prep-Before-The-49/README.md).

---

## 🚀 How each problem works

Each finished problem folder has **three C++ approaches** + **one Mermaid flowchart per approach**.

### Who does what

| Work | Owner |
|:---|:---|
| `1-Brute-Force.c++` · `2-Optimized.c++` · `3-Optimal.c++` | **You** |
| `1-Brute-Force.flowchart.md` · `2-Optimized.flowchart.md` · `3-Optimal.flowchart.md` | **Cursor AI** (from your C++) |

No draw.io. No `.png` charts. Mermaid in Markdown → renders on GitHub and diffs cleanly.

### The three approaches

1. **🧩 Brute Force** — honest slow-correct baseline  
2. **⚡ Optimized** — better time and/or space  
3. **🏆 Optimal** — best practical interview solution here  

### Live interview packaging

Same solve brain, spoken as **6 steps**: clarify → examples → brute → optimize → code → test.  
Details: [`02 · Live coding`](./00-Prep-Before-The-49/02-How-To-Practice.md#live-coding-interview--6-steps).

Agent rules: [`AGENTS.md`](./AGENTS.md).

---

## ▶️ Run a solution (C++)

Requires **g++** (MinGW). On this machine it is installed globally via WinLibs:

```text
winget install -e --id BrechtSanders.WinLibs.POSIX.UCRT
```

### One command (recommended)

From the repo root in PowerShell:

```powershell
.\run.ps1                      # problem 01 · Brute Force
.\run.ps1 -Problem 01 -Approach 2   # Optimized
.\run.ps1 -Problem 01 -Approach 3   # Optimal
.\run.ps1 -File .\01-Contains-Duplicate-Arrays-Hashing-Easy\1-Brute-Force.c++
```

### Cursor / VS Code

Open a `.c++` file → **Terminal → Run Build Task** (default task = compile & run the current file).

### Manual

```powershell
g++ -std=c++17 -O2 -o brute.exe .\01-Contains-Duplicate-Arrays-Hashing-Easy\1-Brute-Force.c++
.\brute.exe
```

`.exe` files are gitignored — rebuild anytime with `.\run.ps1`.

---

## 🗂️ Repository structure

```text
LeetCode-DSA-Pareto-Set/
├── PROGRESS.md                ← your live bars + prep sheet ticks
├── run.ps1                    ← compile + run any approach
├── 00-Prep-Before-The-49/     ← study reference (tick progress as you read)
├── 01-…/                      ← one folder per solved / in-progress problem
├── .vscode/tasks.json         ← Run Build Task on current .c++ file
├── .cursor/rules/             ← you code C++ · AI owns Mermaid charts
├── AGENTS.md                  ← how Cursor must behave here
└── README.md
```

### Problem folder naming

```text
Problem-Number-Problem-Name-Category-difficulty
```

### Gold-standard shape (copy for every later folder)

```text
01-Contains-Duplicate-Arrays-Hashing-Easy/
    ├── 1-Brute-Force.c++
    ├── 2-Optimized.c++
    ├── 3-Optimal.c++
    ├── 1-Brute-Force.flowchart.md
    ├── 2-Optimized.flowchart.md
    └── 3-Optimal.flowchart.md
```

Create the next folder **only when you start that problem**.

---

## 📋 Problem Checklist (49 Problems)

> New here? Finish [`00-Prep-Before-The-49`](./00-Prep-Before-The-49/) first (tick sheets in [`PROGRESS.md`](./PROGRESS.md)), then solve and mark `[✅]` top → bottom.  
> After each solved folder, update the **Problems** bar in [`PROGRESS.md`](./PROGRESS.md).

### 🧮 Arrays & Hashing

- [✅] 1. [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) · folder [`01-…`](./01-Contains-Duplicate-Arrays-Hashing-Easy/)
- [ ] 2. [Valid Anagram](https://leetcode.com/problems/valid-anagram/)
- [ ] 3. [Two Sum](https://leetcode.com/problems/two-sum/)
- [ ] 4. [Group Anagrams](https://leetcode.com/problems/group-anagrams/)
- [ ] 5. [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)
- [ ] 6. [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)
- [ ] 7. [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)
- [ ] 8. [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)

---

### 🔁 Two Pointers

- [ ] 9. [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)
- [ ] 10. [Two Sum II — Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
- [ ] 11. [3Sum](https://leetcode.com/problems/3sum/)
- [ ] 12. [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

---

### 🪟 Sliding Window

- [ ] 13. [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
- [ ] 14. [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
- [ ] 15. [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)

---

### 🧱 Stack

- [ ] 16. [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
- [ ] 17. [Min Stack](https://leetcode.com/problems/min-stack/)
- [ ] 18. [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/)

---

### 🎯 Binary Search

- [ ] 19. [Binary Search](https://leetcode.com/problems/binary-search/)
- [ ] 20. [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)
- [ ] 21. [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

---

### 🔗 Linked List

- [ ] 22. [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- [ ] 23. [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- [ ] 24. [Reorder List](https://leetcode.com/problems/reorder-list/)
- [ ] 25. [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
- [ ] 26. [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)
- [ ] 27. [LRU Cache](https://leetcode.com/problems/lru-cache/)

---

### 🌳 Trees

- [ ] 28. [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)
- [ ] 29. [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
- [ ] 30. [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)
- [ ] 31. [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)
- [ ] 32. [Same Tree](https://leetcode.com/problems/same-tree/)
- [ ] 33. [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)
- [ ] 34. [Lowest Common Ancestor of a BST](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)
- [ ] 35. [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)
- [ ] 36. [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)
- [ ] 37. [Count Good Nodes in Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/)
- [ ] 38. [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)
- [ ] 39. [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)

---

### ⛰️ Heap / Priority Queue

- [ ] 40. [Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/)
- [ ] 41. [Last Stone Weight](https://leetcode.com/problems/last-stone-weight/)
- [ ] 42. [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)

---

### 🌐 Graphs

- [ ] 43. [Number of Islands](https://leetcode.com/problems/number-of-islands/)
- [ ] 44. [Max Area of Island](https://leetcode.com/problems/max-area-of-island/)
- [ ] 45. [Clone Graph](https://leetcode.com/problems/clone-graph/)
- [ ] 46. [Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/)
- [ ] 47. [Surrounded Regions](https://leetcode.com/problems/surrounded-regions/)
- [ ] 48. [Course Schedule](https://leetcode.com/problems/course-schedule/)
- [ ] 49. [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/)

---

## 🧾 Credits

- **The Pareto Problem Set** — Aman · https://www.youtube.com/@AmanManazir  
- Live coding *process* habits in prep (clarify → brute → optimize → test) align with industry whiteboard practice, including [Manara](https://support.manara.tech/knowledge/how-to-land-a-job-at-a-global-tech-company)’s technical track — **not** a full career/behavioral curriculum.

---

⭐ **If you find this repository helpful, consider giving it a star!**
