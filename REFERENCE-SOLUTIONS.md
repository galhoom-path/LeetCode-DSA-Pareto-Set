# 🤖 Reference solutions — branch `reference-solutions`

> **AI-authored reference solutions**, written on the owner's explicit request (2026-11-27).
> `main` stays the owner's **hand-written** learning track. Nothing on this branch is merged or cherry-picked into `main` without the owner's explicit approval.
> The owner's personal progress (`[✅]` in the root README, **Read** / **Explain** boxes, `PROGRESS.md`) is **never** ticked here.

## How to use this branch

```text
  Solve #N yourself on main  →  then open this branch's #N folder  →  compare approaches
```

View on GitHub: switch the branch selector to `reference-solutions`, or `git switch reference-solutions` locally.

## Verification bar (every problem below marked ✅)

- Six files in the gold-standard shape of `01-Contains-Duplicate-…` (header comment block, `class Solution`, small `main`).
- Each approach compiled with gcc 14.1, `-std=c++17 -Wall -Wextra -Wshadow -fsanitize=address,undefined`, with zero warnings, then run against the LeetCode examples plus edge cases in a temporary test harness (never committed — the repo stays problems-only).
- Each flowchart mirrors its own `.c++` file and renders as valid Mermaid. Labels use `<br/>` for line breaks.
- One focused commit per problem, pushed and checked on the remote before the next problem starts.

## Status · checkpoint

`Owner (main)` = the owner's own solution, unchanged. `✅ verified` = reference added and verified as above. `⏳` = not started.

| # | Problem | Reference status |
|:---:|:---|:---|
| 1 | Contains Duplicate | Owner (main) — audited: all three compile clean and pass |
| 2 | Valid Anagram | Owner (main) — audited: all three compile clean and pass |
| 3 | Two Sum | ✅ verified · [`03-…`](./03-Two-Sum-Arrays-Hashing-Easy/) |
| 4 | Group Anagrams | ✅ verified · [`04-…`](./04-Group-Anagrams-Arrays-Hashing-Medium/) |
| 5 | Top K Frequent Elements | ✅ verified · [`05-…`](./05-Top-K-Frequent-Elements-Arrays-Hashing-Medium/) |
| 6 | Valid Sudoku | ✅ verified · [`06-…`](./06-Valid-Sudoku-Arrays-Hashing-Medium/) |
| 7 | Product of Array Except Self | ⏳ |
| 8 | Longest Consecutive Sequence | ⏳ |
| 9 | Valid Palindrome | ⏳ |
| 10 | Two Sum II — Input Array Is Sorted | ⏳ |
| 11 | 3Sum | ⏳ |
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

**Reference coverage:** 4 / 47 · **Next:** #7 Product of Array Except Self

## Prep pack fixes on this branch

Commit `4698d1c` (`docs(prep): …`) fixes the prep pack's emoji-heading anchors, a null-pointer snippet in sheet 04, and the complexity tables in sheets 06 and 07. It touches no solution and no checkbox. The owner may cherry-pick that one commit onto `main`.
