# 💻 04 · C++ For The 49


### ✅ My progress · this sheet

- [ ] I **read** this sheet end-to-end
- [ ] I can **explain** the main ideas without looking

> When both are checked → also tick this sheet in [PROGRESS.md](../PROGRESS.md#prep-sheets--your-reading-progress) and refresh the bars.

---
> 📌 **At a glance**  
> - **C++ solvers:** read carefully before coding.  
> - **Other languages:** skim ideas, then translate snippets.  
> - **Rule:** short examples only — not a full C++ course.

```text
  Concepts (any language)     Examples in this pack
  ─────────────────────       ─────────────────────
  loops, arrays, maps   →     written as C++
                              (Python/Java/…: rename types)
```

---

## 📗 Part A — Basics

### 0 · How a LeetCode C++ solution looks

Almost every problem uses a `Solution` class with one method:

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // your logic here
        return false;
    }
};
```

| Piece | Meaning |
|:---|:---|
| `vector<int>& nums` | Dynamic array of ints, passed **by reference** (no full copy) |
| `bool` / `int` / `vector<int>` | Return type |
| `public:` | LeetCode calls this method |

You rarely write `main` on LeetCode. In **this repo**, files often add a small `main` to try examples locally — same logic inside `Solution`.

---

### 1 · Types you will see constantly

```cpp
int x = 3;
bool ok = true;
char c = 'a';
string s = "hello";   // #include <string>
```

| Type | Use in the 49 |
|:---|:---|
| `int` / `long long` | Counts, indices (use `long long` if products can overflow) |
| `bool` | True/false answers |
| `char` / `string` | Letters, words |
| `vector<T>` | Arrays |
| Pointers `T*` | Linked list / tree nodes |

---

### 2 · Variables, `const`, references

```cpp
int a = 1;
int& ref = a;   // ref is another name for a
ref = 2;        // a is now 2

void f(vector<int>& nums) { /* change nums in-place */ }
void g(const vector<int>& nums) { /* read-only, no copy */ }
```

**Why `&` matters:** copying a huge array is slow — solutions pass `vector` by reference.

---

### 3 · Conditionals & loops

```cpp
if (x == 0) { /* … */ }
else if (x < 0) { /* … */ }
else { /* … */ }

// index loop — classic array scan
for (int i = 0; i < (int)nums.size(); i++) {
    int value = nums[i];
}

// range-for — when you only need values
for (int value : nums) {
    // …
}

while (!st.empty()) {
    st.pop();
}
```

**Off-by-one:** valid indices are `0 … size()-1`.

---

### 4 · Functions & recursion (trees / DFS)

```cpp
int add(int a, int b) {
    return a + b;
}

// recursion needs a base case
int depth(TreeNode* node) {
    if (node == nullptr) return 0;              // base
    return 1 + max(depth(node->left), depth(node->right));
}
```

See also [12-Traversal-Recursion-Queue.md](./12-Traversal-Recursion-Queue.md).

---

### 5 · `vector` — your default array

```cpp
#include <vector>
using namespace std;

vector<int> a = {1, 2, 3};
a.push_back(4);          // add at end
int n = (int)a.size();
int x = a[0];            // first element
a[1] = 99;
```

| Need | C++ |
|:---|:---|
| Length | `a.size()` |
| Empty? | `a.empty()` |
| 2D grid | `vector<vector<int>> g` or `vector<vector<char>>` |

---

### 6 · `string` & characters

```cpp
#include <string>
#include <cctype>   // isalnum, tolower

string s = "Hello";
char c = s[0];
bool letter = isalnum(c);
char low = tolower(c);
```

Used heavily in palindrome / substring problems (#9, #14, #15).

---

### 7 · Null pointers (lists & trees)

```cpp
ListNode* p = nullptr;   // empty
if (p == nullptr) { /* empty list / missing child */ }
int v = p->val;          // only after null check
ListNode* nxt = p->next;
```

**Golden rule:** never write `p->…` before checking `p != nullptr`.

---

### 8 · `#include` & `using`

```cpp
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>   // sort, max, min

using namespace std;     // common in LeetCode snippets
```

STL containers continue in **Part B** below.

---

### 9 · Complexity in C++ shape (same ideas, any language)

```cpp
// O(n) — one pass
for (int x : nums) { /* … */ }

// O(n²) — nested passes (often brute force)
for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
        { /* compare nums[i], nums[j] */ }
```

---

### ✅ Self-check (basics)

- [ ] I recognize a `Solution` method signature  
- [ ] I can write a `for` over a `vector`  
- [ ] I know why we pass `vector&`  
- [ ] I null-check before `->`  

**Other languages:** rewrite the snippets in your language once — keep the algorithm identical.

---

## 📘 Part B — STL containers for the 49

**Ideas** (hash set, stack, heap…) are universal; **syntax** here is C++. Translate freely.

### Map: container → pattern

| Container | Pattern in the 49 |
|:---|:---|
| `vector` | Arrays, answers, grids |
| `unordered_set` | Duplicates, consecutive (#1, #8) |
| `unordered_map` | Counts, Two Sum, clone map |
| `stack` | Parentheses, monotonic (#16–18) |
| `queue` | BFS, Kahn topo (#35–36, #48–49) |
| `priority_queue` | Top-K, stones (#5, #40–42) |
| Hand-rolled DLL + map | LRU (#27) |

---

### `unordered_set` — “have I seen this?”

```cpp
#include <unordered_set>
unordered_set<int> seen;
seen.insert(3);
if (seen.count(3)) { /* yes */ }
seen.erase(3);
```

Average **O(1)** lookup — core of Arrays & Hashing.

---

### `unordered_map` — key → value

```cpp
#include <unordered_map>
unordered_map<int, int> idx;   // value → index (Two Sum)
idx[7] = 2;
if (idx.count(7)) {
    int i = idx[7];
}

unordered_map<char, int> freq;
freq['a']++;                   // count letters
```

---

### `stack` — LIFO

```cpp
#include <stack>
stack<char> st;
st.push('(');
char top = st.top();
st.pop();
bool empty = st.empty();
```

---

### `queue` — FIFO (BFS)

```cpp
#include <queue>
queue<int> q;
q.push(1);
int front = q.front();
q.pop();
```

---

### `priority_queue` — heap

```cpp
#include <queue>
// max-heap (default)
priority_queue<int> maxh;
maxh.push(5); maxh.push(1);
int biggest = maxh.top(); maxh.pop();

// min-heap
priority_queue<int, vector<int>, greater<int>> minh;
minh.push(5); minh.push(1);
int smallest = minh.top();
```

---

### `sort`

```cpp
#include <algorithm>
vector<int> a = {3, 1, 2};
sort(a.begin(), a.end());          // ascending
```

Used before two-pointer scans (e.g. 3Sum).

---

### Node shapes (copy these mentally)

```cpp
struct ListNode {
    int val;
    ListNode* next;
};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

// Clone Graph style
class Node {
public:
    int val;
    vector<Node*> neighbors;
};
```

---

### Mini pattern gallery (C++ · same idea elsewhere)

### Hash set scan (idea behind #1)

```cpp
bool hasDup(vector<int>& nums) {
    unordered_set<int> seen;
    for (int x : nums) {
        if (seen.count(x)) return true;
        seen.insert(x);
    }
    return false;
}
```

### Two pointers on sorted array (idea behind #10)

```cpp
vector<int> twoSumSorted(vector<int>& a, int target) {
    int L = 0, R = (int)a.size() - 1;
    while (L < R) {
        int sum = a[L] + a[R];
        if (sum == target) return {L + 1, R + 1}; // 1-based if required
        if (sum < target) L++;
        else R--;
    }
    return {};
}
```

### Sliding window unique chars (idea behind #14)

```cpp
int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> last; // char → last index
    int best = 0, L = 0;
    for (int R = 0; R < (int)s.size(); R++) {
        char c = s[R];
        if (last.count(c) && last[c] >= L)
            L = last[c] + 1;
        last[c] = R;
        best = max(best, R - L + 1);
    }
    return best;
}
```

> These are **teaching sketches**, not the full Optimal files — those live in problem folders.

---

### Run a problem file locally

This repo’s `.c++` files include a small `main()` so you can compile and print one example.

From the **repo root** (needs `g++` on PATH — WinLibs MinGW is fine):

```powershell
.\run.ps1                              # #1 Brute
.\run.ps1 -Problem 01 -Approach 3      # #1 Optimal
```

Or in Cursor: open the `.c++` file → **Terminal → Run Build Task**.

Full notes: root [`README.md` · Run a solution](../README.md#-run-a-solution-c).

---

### Self-check (STL)

- [ ] I can pick set vs map vs stack vs queue vs heap for a pattern  
- [ ] I can read `ListNode*` / `TreeNode*` signatures  
- [ ] If I use another language, I know what to map each container to

**Need exact STL docs?** Start at [cppreference](https://en.cppreference.com/w/cpp). Curated links for *this* repo (only what the 49 use): [16 · C++ reference](./16-Ready-For-The-49-Checklist.md#c-reference-cppreference).

➡️ **Next →** [05-Pattern-Map-For-The-49.md](./05-Pattern-Map-For-The-49.md) (then follow `Next →` through **06–16**).
