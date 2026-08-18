# Lecture 10 — Pointers and Dynamic Memory

79 frames, 7 sections, 2 figures. Code listings: `c`, `output`.
Scheduled for **4 sessions**, assessed by **HW3**.

## Sections

1. Introduction
2. Pointers and Functions
3. Pointers and Arrays
4. Pointers and Strings
5. Pointer to Pointer & Pointer to Function
6. Dynamic memory allocation
7. Common Bugs

Each one produces an outline divider automatically, from the
`\AtBeginSection` hook in `../c-lecture.cls`.

## Notes

79 frames and the hardest four sessions of the course. The section order is a
ladder — functions, then arrays, then strings, then pointer-to-pointer — and
each rung reuses the lecture that introduced the topic without pointers. Do
not reorder. **Common Bugs** here is the most valuable section in the
repository: dangling pointers, leaks, and freeing twice.

## Reminders

- The deck sets only `\subtitle`; author, title and institute come from
  `../c-lecture.cls`. Do not set them here.
- Any frame containing `minted` must be `\begin{frame}[fragile]`.
- Beamer does not fail on an overfull frame. Check the PDF after adding
  content, or use `[shrink]`.
