> 🛤️ **Part of [Galhoom Path](https://github.com/galhoom-path)** · Track 2 — Problem Solving  
> This repository belongs to the **Galhoom Path** organization (**Study** · **Problem Solving** · **Interview Prep** · **Projects**).  
> → [Organization home](https://github.com/galhoom-path)

# 🧠 LeetCode DSA Pareto Set

> **"Master the 20% of problems that give you 80% of the results."**

This repository is my **structured path through the 49 essential LeetCode problems** from **The Pareto Problem Set** — the high-ROI DSA patterns that show up again and again in interviews.

> 📌 **Current state**  
> - Prep pack (`00-Prep-Before-The-49/`) → **complete**  
> - Solutions → **one problem at a time** (I write the three `.c++` files; Cursor AI adds the three Mermaid charts)  
> - Unchecked checklist items → **normal**, not missing work

---

## 🎒 Start here if you are new

Not everyone who opens this repo already knows Big O, edge cases, or the patterns behind these 49 problems.

**Before the checklist**, study the complete reference pack:

### → [`00-Prep-Before-The-49/`](./00-Prep-Before-The-49/)

That folder is a **finished educational guide** for:

1. **Absolute beginners** — problem solving + LeetCode culture  
2. **The 49 specifically** — Big O, edges, pattern map, category sheets  
3. **C++ in this repo** — one short C++/STL sheet to read and write solutions (other languages: same ideas, translate the snippets)

It does **not** wait on you solving. You **read** it first; you **solve** later in `01`…`49`.  
Sheets are numbered in **study order** (`00`→`16`).

```text
  00-Prep-Before-The-49/   (on-ramp + C++ enough + patterns — complete)
           ↓
  01…49 problem folders    (you solve in C++)
```

---

## 🚀 Problem-Solving Methodology

Each problem uses **three coded approaches** + **one Mermaid flowchart per approach** (three charts total).

### Who does what

| Work | Owner |
|:---|:---|
| `1-Brute-Force.c++` · `2-Optimized.c++` · `3-Optimal.c++` | **You** (write / revise the C++) |
| `1-Brute-Force.flowchart.md` · `2-Optimized.flowchart.md` · `3-Optimal.flowchart.md` | **Cursor AI** (reads your C++ and draws the flow) |

No draw.io. No `.png` exports. Charts live as **Mermaid inside Markdown** so GitHub renders them and git can diff them.

### The three approaches (you code)

1. **🧩 Brute Force** — straightforward correct C++; prove you understand the statement (may be slow).  
2. **⚡ Optimized** — better time and/or space than brute.  
3. **🏆 Optimal** — best practical interview solution here (clarity + efficiency).

### The three flowcharts (Cursor AI)

After (or when) the matching `.c++` file exists, Cursor creates / updates the sibling `.flowchart.md` so **each approach has its own chart** — not one chart for Optimal only.

Ideal chart file:

- Short title + which `.c++` it mirrors  
- One ` ```mermaid ` flowchart (TD) of the **control flow** of that approach  
- Optional one-line complexity reminder  

---

## 🗂️ Repository Structure

```text
LeetCode-DSA-Pareto-Set/
├── 00-Prep-Before-The-49/     ← complete study reference (read first)
├── 01-…/                      ← one folder per *solved / in-progress* problem
├── .cursor/rules/             ← you code C++ · AI owns Mermaid charts
├── AGENTS.md                  ← how Cursor must behave in this repo
└── README.md
```

Create a problem folder **when you start that problem** — do not leave empty stub `.c++` files for unsolved items.

### Prep folder

See [`00-Prep-Before-The-49/README.md`](./00-Prep-Before-The-49/README.md).

### Problem folders

Naming:

```text
Problem-Number-Problem-Name-Category-difficulty
```

Each folder includes:

| File | Role |
|:---|:---|
| `1-Brute-Force.c++` | Your brute solution (+ comments: steps, Big O, edges) |
| `2-Optimized.c++` | Your mid improvement |
| `3-Optimal.c++` | Your best practical solution |
| `1-Brute-Force.flowchart.md` | AI Mermaid for brute |
| `2-Optimized.flowchart.md` | AI Mermaid for optimized |
| `3-Optimal.flowchart.md` | AI Mermaid for optimal |

**Gold-standard example** (copy this shape for every later folder):

```text
01-Contains-Duplicate-Arrays-Hashing-Easy/
    ├── 1-Brute-Force.c++
    ├── 2-Optimized.c++
    ├── 3-Optimal.c++
    ├── 1-Brute-Force.flowchart.md
    ├── 2-Optimized.flowchart.md
    └── 3-Optimal.flowchart.md
```

---

## 📋 Problem Checklist (49 Problems)

> New here — even if you’ve never heard of LeetCode? Study [`00-Prep-Before-The-49`](./00-Prep-Before-The-49/) first (world + patterns), then solve and tick problems top → bottom.

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

This collection is based on **The Pareto Problem Set** PDF created by **Aman** — a curated list of the most impactful LeetCode problems for mastering DSA fundamentals.

Aman youtube channel: https://www.youtube.com/@AmanManazir

---

⭐ **If you find this repository helpful, consider giving it a star!**
