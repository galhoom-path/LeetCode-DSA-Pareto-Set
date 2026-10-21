# Agent guide — LeetCode DSA Pareto Set

## Non-negotiables

1. **Do not solve upcoming problems for the human.**  
   The owner writes `1-Brute-Force.c++`, `2-Optimized.c++`, and `3-Optimal.c++` **problem by problem**.  
   Do not fill empty folders, invent solutions for checklist items still unchecked, or “finish the 49” in bulk.

2. **Flowcharts are Cursor’s job** (after the matching C++ exists):  
   `1-Brute-Force.flowchart.md`, `2-Optimized.flowchart.md`, `3-Optimal.flowchart.md`  
   Format = **Mermaid in Markdown**. No draw.io / `.png`.

3. **Prep pack** (`00-Prep-Before-The-49/`) is a finished study reference — keep it consistent if you edit it; do not replace it with solving.

4. **Gold standard for a finished problem folder:**  
   `01-Contains-Duplicate-Arrays-Hashing-Easy/`  
   Copy its comment layout, style, and six-file shape. See `.cursor/rules/`.

## When the human asks for help on a problem

- Allowed: explain a concept, review *their* code, fix style to match the gold standard, write/update **flowcharts** from their C++.  
- Not allowed: silently author all three approaches for problems they have not asked to solve yet.

## Checklist vs folders

- Root README checklist tracks progress (`[✅]` / `[ ]`).  
- A folder exists only for problems being worked or done — never empty 0-byte stubs for future numbers.
