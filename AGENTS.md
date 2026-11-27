# 🤖 Agent guide — LeetCode DSA Pareto Set

> **Owner-authorized exception (2026-11-27):** on the owner's explicit request, AI-authored reference solutions were written on the branch `reference-solutions`, and references #3–#10 were merged into `main`; #11 was then added directly on `main` on the owner's request. They are recorded as AI-authored in [`REFERENCE-SOLUTIONS.md`](./REFERENCE-SOLUTIONS.md) and in every flowchart (the README checklist shows only `[✅]`, by the owner's choice). Non-negotiable #1 below still applies to everything else: author no further solutions unless the owner explicitly asks, and never present AI-authored code as the owner's.

## 🚫 Non-negotiables

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

## ✅ When the human asks for help on a problem

- **Allowed:** explain a concept, review *their* code, fix style to match the gold standard, write/update **flowcharts** from their C++.  
- **Not allowed:** silently author all three approaches for problems they have not asked to solve yet.

## 📋 Checklist vs folders

- Root README checklist (owner policy, 2026-11-27): `[✅]` = the problem's **six deliverables are complete, reviewed and accepted** — it does **not** mean the owner solved it personally. Authorship lives in [`REFERENCE-SOLUTIONS.md`](./REFERENCE-SOLUTIONS.md): #1–#2 are the owner's own, #3–#11 are AI-authored. Do not add authorship labels to the checklist lines.  
- [`PROGRESS.md`](./PROGRESS.md) tracks **prep reading** (17 sheets) + bars for prep / 49 / combined.  
- A folder exists only for problems being worked or done — never empty 0-byte stubs for future numbers.

## 📊 Progress ownership

- **Human only:** prep sheet boxes (Read / Explain inside each sheet) and the prep lines in `PROGRESS.md`. AI never ticks these.  
- **README `[✅]`:** may be ticked by AI only after all six deliverables exist and pass the technical audit (compile, tests, valid Mermaid) — and an AI-authored problem must be recorded in `REFERENCE-SOLUTIONS.md`. Never describe AI-authored code as written by the owner.  
- After any tick, recount and refresh the bars in `PROGRESS.md` + root README to match the checklists.

## 🔄 Git / GitHub (automatic)

After any substantive change in this repo, Cursor should:

1. Create a **Conventional Commit** (no need for the human to ask).  
2. **Push** to `origin` so [GitHub](https://github.com/galhoom-path/LeetCode-DSA-Pareto-Set) stays current.

Details: `.cursor/rules/auto-conventional-commit.mdc`.
