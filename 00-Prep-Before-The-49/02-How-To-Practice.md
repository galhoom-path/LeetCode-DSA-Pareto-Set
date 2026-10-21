# 🧭 02 · How To Practice

> 📌 **At a glance**
>
> **For:** a repeatable way to **read** any problem and **solve** it (LeetCode, interview, or this repo).  
> **Goal:** never open a statement without a ritual, never code without a plan.

---

## 📗 Part A — How to read a problem

### The 6-pass read (use always)

| Pass | Focus | Output |
|:---:|:---|:---|
| **1** | One-sentence goal | “Return whether any value appears twice.” |
| **2** | Input / output types | `vector<int>` → `bool` |
| **3** | Examples by hand | Trace example 1 on paper |
| **4** | Constraints | `n` size, sorted?, duplicates?, ranges |
| **5** | Edge cases | Empty, single, all same, … |
| **6** | Follow-up / hints | Target complexity |

```mermaid
flowchart TD
  A["Skim goal"] --> B["Types I/O"]
  B --> C["Trace examples"]
  C --> D["Constraints"]
  D --> E["Edges"]
  E --> F["Complexity target"]
  F --> G["Brute idea"]
```

**Do not code before pass 4.** Constraints decide if O(n²) is even allowed.

---

### Translate English → CS objects

| Statement word | Often means |
|:---|:---|
| “array / list of integers” | `vector` / array |
| “indexed from 0” | Careful with loops |
| “return the indices” | Order may matter; 1-based vs 0-based |
| “you may assume” | Free facts — use them |
| “it is guaranteed” | No need to handle that error |
| “in-place” | Limit extra memory |
| “follow-up: O(1) space” | Harder version after brute |

---

### Worked micro-example (Contains Duplicate)

**Statement idea:** return true if any value appears ≥ 2 times.

| Pass | Notes |
|:---|:---|
| Goal | Detect duplicate existence |
| I/O | `nums` → `bool` |
| Example | `[1,2,3,1]` → true (hand-check) |
| Constraints | Often `n` up to 10⁵ → O(n²) may TLE |
| Edges | `[]` → false; `[7]` → false |
| Follow-up | Faster than nested loops → hash set |

Now you are ready for Brute → Optimal (playbook below).

---

### Red flags in constraints

| You see… | Think… |
|:---|:---|
| `n ≤ 10^5` or `10^6` | Aim O(n) / O(n log n), not O(n²) |
| `n ≤ 100` | O(n²) or O(n³) might be OK for brute learning |
| “array is sorted” | Two pointers / binary search candidates |
| “only lowercase letters” | Count array size 26 possible |
| “linked list” | Pointers, not random access |

---

### Interview vs LeetCode reading

| LeetCode | Live interview |
|:---|:---|
| Full text on screen | You may need to **clarify** with the interviewer |
| Hidden tests | You invent tests out loud |
| Instant Submit | You dry-run on examples verbally |

Same reading passes — plus **ask** if a constraint is missing.

---

### ✅ Self-check

- [ ] I have a fixed order: goal → I/O → examples → constraints → edges  
- [ ] I refuse to code before knowing rough `n`  
- [ ] I can restate any problem in one sentence

---

## 📘 Part B — Problem-solving playbook

### The universal loop

```mermaid
flowchart LR
  U["Understand"] --> B["Brute"]
  B --> I["Improve"]
  I --> T["Test edges"]
  T --> X["Explain Big O"]
```

| Step | Do this |
|:---|:---|
| **Understand** | 6-pass read (above) |
| **Brute** | Correct naive idea — prove you get the statement |
| **Improve** | Faster / less memory using a pattern |
| **Test** | Happy path + edges |
| **Explain** | Time & space in Big O |

---

### How **this repo** encodes the loop

Every problem folder:

| File | Who | Playbook step |
|:---|:---|:---|
| `1-Brute-Force.c++` | **You** | Honest slow-correct |
| `2-Optimized.c++` | **You** | Mid improvement |
| `3-Optimal.c++` | **You** | Best practical for interviews here |
| `1-…` / `2-…` / `3-….flowchart.md` | **Cursor AI** | Mermaid control-flow for **that** approach |

```text
  You code the three C++ files
       ↓
  Cursor AI draws three Mermaid flowcharts (one per approach)
       ↓
  Interview speech ≈ Brute → “better” → Optimal  (+ charts to explain each)
```

No draw.io / `.png`. Format = **Mermaid in Markdown** (renders on GitHub). Details: root `README.md`.

---

### Pattern recognition (the shortcut)

After prep pattern sheets **06–15**, you will ask:

> “Have I seen this shape before?”

| Shape | First weapon |
|:---|:---|
| Need fast “seen before?” | Hash set/map |
| Sorted pair / ends | Two pointers |
| Contiguous best segment | Sliding window |
| Match / next greater | Stack |
| Sorted find | Binary search |
| Node chain | Linked list |
| Hierarchy | Tree DFS/BFS |
| Repeated max/min / top-K | Heap |
| Grid flood / prereqs | Graph |

Full map: [05-Pattern-Map-For-The-49.md](./05-Pattern-Map-For-The-49.md).

---

### When you are stuck (anywhere — not only the 49)

1. Re-trace an **example by hand**  
2. Write the **brute** even if ugly  
3. Ask: which **prep sheet** pattern fits?  
4. Shrink the problem (n=3) on paper  
5. Check **constraints** again  
6. Take a short break; return with only the invariant  

---

### Practice hygiene (general)

| Do | Don’t |
|:---|:---|
| Time-box a first attempt | Infinite scrolling of solutions in 30s |
| Compare after **your** brute exists | Copy Optimal first |
| Revise patterns weekly | Only grind random Hard |
| Speak aloud alone | Silent coding only (interviews need talk) |

---

### After the 49

The playbook stays the same:

```text
  New LeetCode / interview problem
       ↓
  Same reading ritual + brute → improve + Big O
       ↓
  You reuse patterns from this pack
```

This folder is your **home base**; the 49 are the first **campaign**.

---

### Self-check (playbook)

- [ ] I can list the 5 loop steps without looking  
- [ ] I know how Brute/Opt/Optimal map to interview talk  
- [ ] I have a stuck protocol

➡️ **Next →** [03-Big-O-And-Edges.md](./03-Big-O-And-Edges.md)
