# ⏱️ 03 · Big O And Edges

> 📌 **At a glance**
>
> **Goal:** read every Time/Space line in the 49, and never ship a “happy-path only” solution.

---

## 📗 Part A — Big O · Time · Space

### Definitions (Pareto)

#### Time complexity

**What it is:** How the **number of steps** grows as the input gets larger (usually vs `n`).

**Remember:** Interviews care about the **growth class**, not exact milliseconds on your laptop.

#### Space complexity

**What it is:** How much **extra** memory you allocate beyond the given input (sets, maps, recursion stack, queues…).

**Remember:** The input array itself usually doesn’t count; say so if you exclude the required output array.

#### Big O

**What it is:** A label for **worst-case growth** — drop constants and lower-order terms (`3n + 10` → O(n)).

**Remember:** It’s an upper-bound style of talk: “this won’t grow worse than …”.

```text
  steps
    ▲
    │          ●  O(n²)
    │        ●
    │      ●     O(n log n)
    │    ●   ●
    │  ●       ●  O(n)
    │●___________● O(1)
    └──────────────▶ n (input size)
```

---

### Classes you will actually see in this repo

Quick map (details below):

| Big O | Gut feel | Typical in the 49 |
|:---|:---|:---|
| **O(1)** | Constant | Hash get (avg), stack push, heap peek |
| **O(log n)** | Halve each step | Binary search (#19–21) |
| **O(n)** | One pass | Hash scan, two pointers, window, many DFS/BFS |
| **O(n log n)** | Sort / heap over n | Top-K / heap (#40–42) |
| **O(n²)** | Nested loops | Typical **brute** before optimizing |
| **O(n³)** | Triple loops | Naive 3Sum brute (#11) |

Grids (#43–47): often **O(m·n)** cells. Graphs (#45, #48–49): often **O(V + E)**.

#### O(1)

**What it is:** Work that does **not** grow with `n` (one hash lookup, one push).

**Remember:** Hash is **average** O(1) — say “average” out loud.

#### O(log n)

**What it is:** Each step throws away a constant fraction of the space (usually half).

**Remember:** Needs sorted / monotonic search space — binary search.

#### O(n)

**What it is:** Roughly proportional to input size — one or a few full passes.

**Remember:** The “good” target for many Easy/Medium array-string problems after brute.

#### O(n log n)

**What it is:** Usually **sort**, or n heap operations of O(log n) each.

**Remember:** Faster than O(n²), slower than a pure O(n) scan — fine when sort is required.

#### O(n²) / O(n³)

**What it is:** Nested loops over the input (pairs / triples).

**Remember:** Often the honest **brute**. At `n ≈ 10⁵`, O(n²) → TLE — upgrade the pattern.

---

### Best / average / worst (hashing)

| | Meaning in this repo |
|:---|:---|
| **Average O(1)** | Hash set/map lookup — what we usually quote |
| **Worst O(n)** | Pathological hash collisions (rare in interviews; still know it exists) |

When a solution says “hash map O(1)”, it means **average**.

---

### What counts as “extra space”?

| Counts as extra space | Usually ignored |
|:---|:---|
| Hash set/map you allocate | The input array/list itself |
| Recursion call stack | Output array **if the problem requires returning it** (say so out loud) |
| Queue/stack for BFS/DFS | — |

---

### Time ↔ space trade-off

```mermaid
flowchart LR
  A["O(n²) time · O(1) space\n(brute pairs)"] -->|"add hash set"| B["O(n) time · O(n) space\n(optimal duplicate check)"]
```

Classic in **#1 Contains Duplicate**.

---

### How to measure an idea (interview script)

1. What is `n`? (length, nodes, `V`/`E`, rows×cols)  
2. How many times do I touch each element?  
3. What extra structures grow with `n`?  
4. Say: **Time O(…) · Space O(…)**  

---

### Reading comments in this repo

```text
Time Complexity:  O(N)   ← linear in input size
Space Complexity: O(N)   ← extra structure proportional to N
```

Same letter `N` / `n` — convention only.

---

### Same ideas in C++ (short)

```cpp
// O(n) — one pass
for (int x : nums) { /* … */ }

// O(n²) — nested loops (typical brute force)
int n = (int)nums.size();
for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
        { /* compare nums[i] and nums[j] */ }
```

Other languages: same structure, different syntax.  
C++ track: [04-Cpp-For-The-49.md](./04-Cpp-For-The-49.md).

---

### Common mistakes

| Mistake | Fix |
|:---|:---|
| “Two nested loops are always O(n²)” | True if both run ~n; not if inner is log n |
| Ignoring recursion stack | Depth `h` ⇒ often O(h) space |
| Calling hash O(1) “always” | Say **average** O(1) |

---

### ✅ Self-check (Big O)

- [ ] I can explain O(1), O(log n), O(n), O(n log n), O(n²) with an example from the 49  
- [ ] I can separate **time** from **space**  
- [ ] I know why Optimal #1 may use more space than Brute

---

## 📘 Part B — Edge cases · interview mindset

### What is an edge case?

**What it is:** A legal input at the **boundary** of the rules — empty, size 1, all equal, max `n`, null head/root, … — that still needs a correct answer (or a defined empty result) without crashing.

**Remember:** Happy-path-only code fails Submit and interviews. Name **2–3 edges before** you type.

```mermaid
flowchart TB
  I["Input"] --> H["Happy path"]
  I --> E["Edge paths"]
  H --> OK["Correct"]
  E --> OK
```

---

### Universal checklist (run on every problem)

| # | Edge | Question |
|:---:|:---|:---|
| 1 | **Empty** | `n == 0`? empty string? null head/root? |
| 2 | **Single** | `n == 1`? one node? |
| 3 | **Two** | Smallest interesting size for pairs/windows |
| 4 | **All equal** | Duplicates everywhere |
| 5 | **All unique** | Opposite extreme |
| 6 | **Sorted / reverse sorted** | Order extremes |
| 7 | **Negatives / zero** | Signs, products, prices |
| 8 | **Duplicates allowed?** | Statement constraints |
| 9 | **Bounds** | First/last index, off-by-one |
| 10 | **Disconnected / null children** | Trees & graphs |
| 11 | **Cycle yes/no** | Lists & course graphs |
| 12 | **Max constraints** | Will O(n²) TLE? |

---

### Per-category edges (for the 49)

| Category | Extra edges to name |
|:---|:---|
| Arrays & Hashing | Empty; frequency 0; anagram length mismatch |
| Two Pointers | Already palindrome; no pair sums to target; all zeros heights |
| Sliding Window | `k = 0`; window never valid; full-string window |
| Stack | Empty string; only opens; never warmer day |
| Binary Search | Length 1; not rotated; target missing |
| Linked List | Empty; remove head; no cycle; capacity 1 (LRU) |
| Trees | Empty; skewed; BST vs non-BST shapes |
| Heap | `k = 1` or `k = n`; equal stones |
| Graphs | Empty grid; all water; no prerequisites; cycle in courses |

---

### Interview talking script (30–60s before code)

Full 6-step live loop: [02 · How to practice](./02-How-To-Practice.md#live-coding-interview--6-steps).

**Before typing (say this out loud):**

1. **Restate** input / output in one sentence  
2. **Constraints** that change the approach (sorted? unique? size? in-place?)  
3. **Two edge cases** you will handle  
4. **Brute** idea + Big O  
5. **Better** idea + Big O  
6. Then code (after the interviewer is aligned)

This matches the repo: Brute → Optimized → Optimal.

**High-ROI clarifying questions** (ask instead of assuming):

| Ask… | Why it matters |
|:---|:---|
| Approx. `n` / value ranges? | Chooses O(n²) vs O(n) |
| Sorted? Unique? Duplicates OK? | Two pointers / binary search / hash |
| In-place / extra memory OK? | Space trade-off |
| Return indices or values? 0- or 1-based? | Wrong output format = WA |
| Mutate the input allowed? | Sort-based approaches |

---

### How solutions in this repo document edges

Look for comments like:

```text
Edge Cases Handled:
- Empty arrays …
- Single element …
```

You should be able to invent that list **before** reading the Optimal file.

---

### Self-check (edges)

- [ ] I can list ≥5 universal edges without looking  
- [ ] For a random category above, I can name 2 specific edges  
- [ ] I practice saying edges **before** coding

**C++ solvers:** study [04](./04-Cpp-For-The-49.md) carefully before pattern coding.  
**Other languages:** skim 04 once so C++ sketches in 06–15 are readable — then translate freely.

➡️ **Next →** [04-Cpp-For-The-49.md](./04-Cpp-For-The-49.md)
