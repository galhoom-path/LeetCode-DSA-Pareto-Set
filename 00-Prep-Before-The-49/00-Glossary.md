# 📖 00 · Glossary

> 📌 **At a glance**  
> The **20% of words** you’ll see again and again in this repo and on LeetCode.  
> Each entry: what it **is** + the **one thing** to remember (Pareto — enough to understand, not a textbook).  
> Deeper practice lives in the linked sheets.

---

## 🌐 World & platform

### Problem solving (interview-style)

**What it is:** Given a clear statement and limits, you invent an approach, pick a structure, write code, and justify correctness plus time/space.

**Remember:** It’s a thinking loop (understand → try → improve → test), not “memorize answers.”

📚 [01 · Welcome](./01-Welcome-To-The-World.md)

---

### Online judge

**What it is:** A website that compiles/runs your code against **hidden** tests and returns pass/fail (and sometimes time/memory).

**Remember:** “Works on my laptop” ≠ Accepted — the judge’s tests decide.

📚 [01 · Welcome](./01-Welcome-To-The-World.md)

---

### LeetCode

**What it is:** The online judge + problem library this repo’s 49 come from (links in the root checklist).

**Remember:** Use it to verify; this repo trains the **stages** (Brute → Optimal) and patterns.

📚 [01 · Welcome](./01-Welcome-To-The-World.md)

---

### Run vs Submit

**What it is:**  
- **Run** — your code on the sample (visible) examples.  
- **Submit** — your code on the full hidden test suite.

**Remember:** Green samples can still fail Submit. Always Submit when you think you’re done.

📚 [01 · Welcome](./01-Welcome-To-The-World.md)

---

### Accepted (AC)

**What it is:** Every hidden test passed — correct output within time/memory limits.

**Remember:** AC means “good enough for the judge,” not “this is the only possible solution.”

📚 [01 · Welcome](./01-Welcome-To-The-World.md)

---

### Wrong Answer (WA)

**What it is:** The judge got a different output than expected on at least one test.

**Remember:** Usually logic bug or a missed **edge case** — not a compiler error.

📚 [01 · Welcome](./01-Welcome-To-The-World.md)

---

### TLE (Time Limit Exceeded)

**What it is:** Your code is too slow for the constraints (often large `n`).

**Remember:** TLE almost always means “need a better Big O,” not “buy a faster computer.” Typical path: nested loops → hash / two pointers / etc.

📚 [01 · Welcome](./01-Welcome-To-The-World.md) · [03 · Big O](./03-Big-O-And-Edges.md)

---

### Constraints

**What it is:** The rules about input size and values (`n ≤ 10⁵`, sorted?, duplicates allowed?, …).

**Remember:** Constraints choose the approach. `n ≤ 100` can allow O(n²); `n ≤ 10⁵` usually needs ~O(n) or O(n log n).

📚 [02 · How to practice](./02-How-To-Practice.md)

---

### Easy / Medium / Hard

**What it is:** LeetCode’s rough difficulty tags.

**Remember:** A hint for pacing — not a measure of your worth. Medium is most of interview bulk; this Pareto set is mostly Easy/Medium patterns.

📚 [01 · Welcome](./01-Welcome-To-The-World.md)

---

### Editorial

**What it is:** An official or community write-up of a solution.

**Remember:** Read **after** you have a brute (or a real attempt). Copying Optimal first skips the skill this repo trains.

📚 [02 · How to practice](./02-How-To-Practice.md)

---

### Pattern

**What it is:** A reusable shape of thinking (hash lookup, sliding window, DFS, …) that shows up across many problems.

**Remember:** Spotting the pattern beats memorizing one problem’s code. Sheet [05](./05-Pattern-Map-For-The-49.md) maps all 49.

📚 [05 · Pattern map](./05-Pattern-Map-For-The-49.md)

---

### `Solution` class (C++)

**What it is:** LeetCode’s wrapper — you fill one public method; the platform calls it. You rarely write `main` on the site.

**Remember:** In **this repo**, files often add a small local `main` to try an example — the real logic stays inside `Solution`.

📚 [04 · C++](./04-Cpp-For-The-49.md)

---

### STL

**What it is:** C++ Standard Library pieces we use constantly: `vector`, `string`, `unordered_set` / `map`, `stack`, `queue`, `priority_queue`, `sort`, …

**Remember:** Learn the **few** containers in sheet [04](./04-Cpp-For-The-49.md); don’t try to memorize all of cppreference.

📚 [04 · C++](./04-Cpp-For-The-49.md) · [cppreference](https://en.cppreference.com/w/cpp)

---

## ⏱️ Efficiency & interviews

### Algorithm

**What it is:** A precise sequence of steps that turns input into the required output.

**Remember:** Code implements an algorithm; if you can’t say the steps in plain language, you’re not ready to type.

📚 [01 · Welcome](./01-Welcome-To-The-World.md)

---

### Data structure

**What it is:** A way to store data so certain operations are fast (lookup, insert, min, …).

**Remember:** Wrong structure → slow or awkward code. The 49 revolve around a small set (hash, stack, tree, heap, graph…).

📚 Sheets [06](./06-Arrays-Hashing.md)–[15](./15-Graphs.md)

---

### Time complexity

**What it is:** How the **number of steps** grows as the input gets larger (usually in terms of `n`).

**Remember:** Interviews care about growth class (O(n) vs O(n²)), not exact CPU milliseconds.

📚 [03 · Big O](./03-Big-O-And-Edges.md)

---

### Space complexity

**What it is:** How much **extra** memory you allocate beyond the input itself (sets, maps, recursion stack, …).

**Remember:** Often we trade space for time (e.g. hash set → O(n) space, O(n) time instead of O(n²)).

📚 [03 · Big O](./03-Big-O-And-Edges.md)

---

### Big O

**What it is:** A label for **worst-case growth** — ignore constants and lower-order terms (`3n + 10` → O(n)).

**Remember the ladder for this repo:** O(1) · O(log n) · O(n) · O(n log n) · O(n²). Hash lookups are **average** O(1).

📚 [03 · Big O](./03-Big-O-And-Edges.md)

---

### Brute force

**What it is:** The simplest correct idea — often slow (nested loops, try everything).

**Remember:** Allowed and useful. It proves you understood the statement; then you improve. File: `1-Brute-Force.c++`.

📚 [02 · How to practice](./02-How-To-Practice.md)

---

### Optimized / Optimal (this repo)

**What it is:**  
- **Optimized** — clearly better than brute (mid step).  
- **Optimal** — best practical approach we aim for in interviews here.

**Remember:** Three C++ files per problem. “Optimal” here means *best practical for this set*, not a math proof of uniqueness.

📚 [02 · How to practice](./02-How-To-Practice.md) · root README

---

### Flowchart (`.flowchart.md`)

**What it is:** A Mermaid diagram of **one** approach’s control flow (loops, branches, returns).

**Remember:** **You** write the three `.c++` files; **Cursor AI** writes the three charts. No draw.io / PNG.

📚 Root [README](../README.md) · [AGENTS](../AGENTS.md)

---

### Edge case

**What it is:** A legal but extreme input (empty, size 1, all equal, max `n`, null head/root, …) that breaks careless code.

**Remember:** Name 2–3 edges **before** coding. Happy-path-only solutions fail Submit and interviews.

📚 [03 · Big O & edges](./03-Big-O-And-Edges.md)

---

## 🧩 Structures & techniques (for the 49)

### Array / `vector`

**What it is:** A contiguous list indexed `0 … n-1`. In C++, `vector` is the dynamic array you’ll see everywhere.

**Remember:** Index access is O(1); scanning all elements is O(n). Searching for a **value** without help is O(n) — that’s why hashing appears so often.

📚 [06 · Arrays & Hashing](./06-Arrays-Hashing.md) · [04 · C++](./04-Cpp-For-The-49.md)

---

### Hash set / hash map

**What it is:**  
- **Set** — store keys; ask “have I seen this?”  
- **Map** — store key → value (count, index, list, …)

**Remember:** Average **O(1)** lookup/insert — the #1 weapon for duplicates, Two Sum, frequencies. Worst case can degrade; interviews usually quote average.

📚 [06 · Arrays & Hashing](./06-Arrays-Hashing.md) · [04 · C++](./04-Cpp-For-The-49.md)

---

### Two pointers

**What it is:** Two indices that move by a rule (often from ends, or after sorting) instead of checking every pair.

**Remember:** Turns many O(n²) pair searches into O(n) (after sort if needed). Classic: palindrome, Two Sum II, container with water.

📚 [07 · Two Pointers](./07-Two-Pointers.md)

---

### Sliding window

**What it is:** A contiguous segment `[L, R]` that grows/shrinks while you maintain a condition (unique chars, at most `k` changes, …).

**Remember:** Both pointers only move forward → usually **O(n)** over the string/array. Think “best contiguous piece.”

📚 [08 · Sliding Window](./08-Sliding-Window.md)

---

### Stack (LIFO)

**What it is:** Last-In, First-Out — push/pop only at the top (like a stack of plates).

**Remember:** Perfect for “most recent unmatched thing” — brackets, nesting, undo-style problems.

📚 [09 · Stack](./09-Stack.md) · [04 · C++](./04-Cpp-For-The-49.md)

---

### Monotonic stack

**What it is:** A stack kept in increasing or decreasing order so you can answer “next greater/warmer” in one pass.

**Remember:** When you need the next bigger (or smaller) element to the right, think monotonic stack (#18 Daily Temperatures).

📚 [09 · Stack](./09-Stack.md)

---

### Queue (FIFO)

**What it is:** First-In, First-Out — process in arrival order.

**Remember:** The engine of **BFS** (level by level). C++: `queue`.

📚 [12 · Traversal](./12-Traversal-Recursion-Queue.md) · [04 · C++](./04-Cpp-For-The-49.md)

---

### Binary search

**What it is:** Repeatedly cut a **sorted** search space in half using a mid point.

**Remember:** O(log n). Use `mid = L + (R - L) / 2` to avoid overflow. Needs sorted order (or a monotonic yes/no condition).

📚 [10 · Binary Search](./10-Binary-Search.md)

---

### Rotated sorted array

**What it is:** A sorted array shifted (e.g. `[4,5,6,7,0,1,2]`) — still mostly ordered in halves.

**Remember:** At each mid, one side is sorted; decide which half holds the target or the minimum (#20–21).

📚 [10 · Binary Search](./10-Binary-Search.md)

---

### Linked list

**What it is:** Nodes each holding a value and a `next` pointer (no random index access).

**Remember:** You walk with pointers. Common jobs: reverse, merge, find nth from end, detect cycle.

📚 [11 · Linked List](./11-Linked-List.md)

---

### Fast / slow pointers

**What it is:** Two pointers at different speeds on a list (or array).

**Remember:**  
- Same list, 2× speed → detect **cycle** or find **middle**.  
- Gap of `n` → remove nth from end.

📚 [11 · Linked List](./11-Linked-List.md)

---

### Tree / binary tree

**What it is:** A hierarchy of nodes. **Binary** = each node has at most left and right child.

**Remember:** No cycles upward. Empty tree / null child is the usual recursion base.

📚 [13 · Trees](./13-Trees-BST.md)

---

### BST (Binary Search Tree)

**What it is:** A binary tree with order: left subtree &lt; node &lt; right subtree (all keys).

**Remember:** Search/LCA can walk like binary search. **Inorder** visit yields sorted values.

📚 [13 · Trees](./13-Trees-BST.md)

---

### DFS (Depth-First Search)

**What it is:** Go as deep as possible along one path, then backtrack. Often written with **recursion** (or an explicit stack).

**Remember:** Natural for tree problems and “flood” on grids/graphs. Watch recursion depth / visited marks.

📚 [12 · Traversal](./12-Traversal-Recursion-Queue.md)

---

### BFS (Breadth-First Search)

**What it is:** Visit level by level using a **queue**.

**Remember:** Level order, right-side view, shortest path in unweighted grids/graphs, Kahn’s topological sort.

📚 [12 · Traversal](./12-Traversal-Recursion-Queue.md)

---

### Heap / priority queue

**What it is:** A structure that always exposes the current **min** or **max** quickly (peek O(1), push/pop O(log n)).

**Remember:** C++ `priority_queue` is a **max-heap** by default; use `greater<int>` for a min-heap. Top-K → often “min-heap of size k.”

📚 [14 · Heap](./14-Heap-Priority-Queue.md) · [04 · C++](./04-Cpp-For-The-49.md)

---

### Graph

**What it is:** Vertices (nodes) connected by edges. In the 49: grids of cells, or adjacency lists (clone graph, courses).

**Remember:** Always track **visited** (or mark the cell) so you don’t loop forever.

📚 [15 · Graphs](./15-Graphs.md)

---

### Adjacency list

**What it is:** For each node, a list of neighbors (C++: often `vector<vector<int>>` or `vector<Node*>`).

**Remember:** The usual way to store sparse graphs — efficient for DFS/BFS over edges.

📚 [15 · Graphs](./15-Graphs.md)

---

### Cycle

**What it is:** A path that returns to a node already on the path (list loop, or circular course prerequisites).

**Remember:** Lists → Floyd fast/slow. Directed courses → DFS colors or Kahn; a cycle means “cannot finish all courses.”

📚 [11 · Linked List](./11-Linked-List.md) · [15 · Graphs](./15-Graphs.md)

---

### Topological order

**What it is:** An ordering of nodes so every directed edge goes from earlier to later (prerequisites before the course).

**Remember:** Only exists if the graph has **no cycle**. Used in Course Schedule I/II.

📚 [15 · Graphs](./15-Graphs.md)

---

### In-degree

**What it is:** How many edges point **into** a node.

**Remember:** Kahn’s algorithm: start with in-degree 0 in a queue; finishing all nodes ⇒ valid order / no cycle.

📚 [15 · Graphs](./15-Graphs.md)

---

### Recursion

**What it is:** A function that solves a smaller version of the same problem by calling itself.

**Remember:** Always need a **base case**. Trees/DFS are mostly recursion in this set. Stack space counts toward space complexity.

📚 [04 · C++](./04-Cpp-For-The-49.md) · [12 · Traversal](./12-Traversal-Recursion-Queue.md)

---

### Base case

**What it is:** The condition that **stops** recursion (e.g. `node == nullptr` → depth 0).

**Remember:** No base case → infinite recursion / stack overflow. Write it first.

📚 [12 · Traversal](./12-Traversal-Recursion-Queue.md)

---

## 🧭 How to use this file

| Goal | Do this |
|:---|:---|
| First time here | Skim **World** + **Efficiency**; don’t memorize Structures yet |
| Before a pattern sheet | Read that sheet’s terms here first (30–60 seconds each) |
| Forgot a word mid-problem | Jump to the term → read **Remember** → follow 📚 if stuck |

➡️ **Next →** [01-Welcome-To-The-World.md](./01-Welcome-To-The-World.md)
