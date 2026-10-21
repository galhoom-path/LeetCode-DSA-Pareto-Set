# 🔗 11 · Linked List

> 📌 **At a glance**
>
> **Problems:** **#22–27** · **Status:** complete reference for this block

---

## 💡 Core idea

Each **node** stores a value and a pointer to the next node (`next`). Optional `prev` for doubly linked lists (LRU).

```text
  head → [1|*] → [2|*] → [3|/]
```

```mermaid
flowchart LR
  H["head"] --> A["1"]
  A --> B["2"]
  B --> C["null"]
```

| Op (singly) | Typical cost |
|:---|:---|
| Walk all | O(n) |
| Insert/delete at known node | O(1) pointer rewires |
| Access by index | O(n) |

---

## Techniques used in #22–27

### Reverse pointers (#22)

```text
  prev=null  curr=head
  while curr:
    next = curr.next
    curr.next = prev
    prev = curr
    curr = next
  head = prev
```

### Merge two sorted lists (#23)

Always attach the smaller head; advance that list.

### Mid + reverse + merge (#24 Reorder)

1. Slow/fast → middle  
2. Reverse second half  
3. Interleave nodes  

### Gap of n (#25)

```text
  fast is n steps ahead of slow
  when fast hits end, slow is at node before removal target
```

### Fast / slow cycle (#26)

```text
  slow 1 step, fast 2 steps
  meet ⇒ cycle
```

```mermaid
flowchart LR
  S["slow"] --> M["meet?"]
  F["fast"] --> M
  M -->|yes| C["cycle"]
  M -->|no| S
```

### LRU Cache (#27)

**Hash map** key→node + **doubly linked list** for recency order.  
`get`/`put` move node to front; evict tail when over capacity. Target **O(1)**.

---

## 📋 Problem-by-problem

| # | Problem | Key idea |
|:---:|:---|:---|
| 22 | Reverse Linked List | Rewire `next` |
| 23 | Merge Two Sorted Lists | Two-list walk |
| 24 | Reorder List | Mid + reverse + merge |
| 25 | Remove Nth From End | Two pointers gap n |
| 26 | Linked List Cycle | Floyd fast/slow |
| 27 | LRU Cache | Map + DLL |

---

## ⏱️ Complexity

| Technique | Time | Extra space |
|:---|:---|:---|
| Reverse / merge / reorder walk | O(n) | O(1) |
| Remove nth / cycle detect | O(n) | O(1) |
| LRU get/put | O(1) amortized | O(capacity) |

---

## 🧪 Edge cases

- Empty / one node  
- Remove head (#25)  
- No cycle  
- Capacity 1 (#27)  
- get missing key  

---

## 💻 C++ mini-example (idea of #22)

```cpp
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* cur = head;
    while (cur) {
        ListNode* nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    return prev;
}
```

**Not C++?** Pointers ↔ references/links in your language. See [04](./04-Cpp-For-The-49.md).

---

## ✅ Self-check

- [ ] I can reverse a 3-node list on paper  
- [ ] I can explain why fast/slow finds a cycle  
- [ ] I know LRU needs both map and list for O(1)

➡️ **Next →** [12-Traversal-Recursion-Queue.md](./12-Traversal-Recursion-Queue.md)
