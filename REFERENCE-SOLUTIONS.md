# 🤖 Reference solutions (AI-authored)

> **AI-authored reference solutions**, written on the owner's explicit request (2026-11-27) on the branch `reference-solutions`.
> On the owner's explicit request, references **#3–#10** were merged into `main` (2026-11-27). That branch was then deleted on the owner's request: `main` is the only branch, and no further references are written unless the owner asks. On the owner's next request, #11 was added directly on `main`.
> These folders are **not** the owner's own solutions. Under the owner's checkbox policy (2026-11-27), the root README `[✅]` means "six deliverables complete, reviewed and accepted", so these problems are ticked there **and** marked 🤖 AI-authored. The prep **Read** / **Explain** boxes and the prep lines in `PROGRESS.md` are never ticked by AI.

## How to use these references

```text
  Solve #N yourself first  →  then open the #N reference folder  →  compare approaches
```

**Authorship at a glance:** 👤 owner-authored = **#1–#2** · 🤖 AI-authored = **#3–#11** (each of their flowcharts also says "AI-authored reference").

## Verification bar (every problem below marked ✅)

- Six files in the gold-standard shape of `01-Contains-Duplicate-…` (header comment block, `class Solution`, small `main`).
- Each approach compiled with gcc 14.1, `-std=c++17 -Wall -Wextra -Wshadow -fsanitize=address,undefined`, with zero warnings, then run against the LeetCode examples plus edge cases in a temporary test harness (never committed — the repo stays problems-only).
- Each flowchart mirrors its own `.c++` file and renders as valid Mermaid. Labels use `<br/>` for line breaks.
- One focused commit per problem, pushed and checked on the remote before the next problem starts.

## Status · checkpoint

`👤 Owner-authored` = the owner's own solution, unchanged. `🤖 AI-authored · ✅ verified` = AI solution added and verified as above. `⏳` = not started.

| # | Problem | Authorship · status |
|:---:|:---|:---|
| 1 | Contains Duplicate | 👤 Owner-authored — audited: all three compile clean and pass |
| 2 | Valid Anagram | 👤 Owner-authored — audited: all three compile clean and pass |
| 3 | Two Sum | 🤖 AI-authored · ✅ verified · [`03-…`](./03-Two-Sum-Arrays-Hashing-Easy/) |
| 4 | Group Anagrams | 🤖 AI-authored · ✅ verified · [`04-…`](./04-Group-Anagrams-Arrays-Hashing-Medium/) |
| 5 | Top K Frequent Elements | 🤖 AI-authored · ✅ verified · [`05-…`](./05-Top-K-Frequent-Elements-Arrays-Hashing-Medium/) |
| 6 | Valid Sudoku | 🤖 AI-authored · ✅ verified · [`06-…`](./06-Valid-Sudoku-Arrays-Hashing-Medium/) |
| 7 | Product of Array Except Self | 🤖 AI-authored · ✅ verified · [`07-…`](./07-Product-Of-Array-Except-Self-Arrays-Hashing-Medium/) |
| 8 | Longest Consecutive Sequence | 🤖 AI-authored · ✅ verified · [`08-…`](./08-Longest-Consecutive-Sequence-Arrays-Hashing-Medium/) |
| 9 | Valid Palindrome | 🤖 AI-authored · ✅ verified · [`09-…`](./09-Valid-Palindrome-Two-Pointers-Easy/) |
| 10 | Two Sum II — Input Array Is Sorted | 🤖 AI-authored · ✅ verified · [`10-…`](./10-Two-Sum-II-Input-Array-Is-Sorted-Two-Pointers-Medium/) |
| 11 | 3Sum | 🤖 AI-authored · ✅ verified · [`11-…`](./11-3Sum-Two-Pointers-Medium/) |
| 12 | Container With Most Water | ⏳ |
| 13 | Best Time to Buy and Sell Stock | ⏳ |
| 14 | Longest Substring Without Repeating Characters | ⏳ |
| 15 | Longest Repeating Character Replacement | ⏳ |
| 16 | Valid Parentheses | ⏳ |
| 17 | Min Stack | ⏳ |
| 18 | Daily Temperatures | ⏳ |
| 19 | Binary Search | ⏳ |
| 20 | Find Minimum in Rotated Sorted Array | ⏳ |
| 21 | Search in Rotated Sorted Array | ⏳ |
| 22 | Reverse Linked List | ⏳ |
| 23 | Merge Two Sorted Lists | ⏳ |
| 24 | Reorder List | ⏳ |
| 25 | Remove Nth Node From End of List | ⏳ |
| 26 | Linked List Cycle | ⏳ |
| 27 | LRU Cache | ⏳ |
| 28 | Invert Binary Tree | ⏳ |
| 29 | Maximum Depth of Binary Tree | ⏳ |
| 30 | Diameter of Binary Tree | ⏳ |
| 31 | Balanced Binary Tree | ⏳ |
| 32 | Same Tree | ⏳ |
| 33 | Subtree of Another Tree | ⏳ |
| 34 | Lowest Common Ancestor of a BST | ⏳ |
| 35 | Binary Tree Level Order Traversal | ⏳ |
| 36 | Binary Tree Right Side View | ⏳ |
| 37 | Count Good Nodes in Binary Tree | ⏳ |
| 38 | Validate Binary Search Tree | ⏳ |
| 39 | Kth Smallest Element in a BST | ⏳ |
| 40 | Kth Largest Element in a Stream | ⏳ |
| 41 | Last Stone Weight | ⏳ |
| 42 | Kth Largest Element in an Array | ⏳ |
| 43 | Number of Islands | ⏳ |
| 44 | Max Area of Island | ⏳ |
| 45 | Clone Graph | ⏳ |
| 46 | Pacific Atlantic Water Flow | ⏳ |
| 47 | Surrounded Regions | ⏳ |
| 48 | Course Schedule | ⏳ |
| 49 | Course Schedule II | ⏳ |

**Reference coverage:** 9 / 47 · **Next:** #12 Container With Most Water

## Prep pack fixes

Commit `4698d1c` (`docs(prep): …`) fixes the prep pack's emoji-heading anchors, a null-pointer snippet in sheet 04, and the complexity tables in sheets 06 and 07. It touches no solution and no checkbox, and it reached `main` with the #3–#10 merge.
