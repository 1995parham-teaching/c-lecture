# Lecture 7 — Repeating Statements

38 frames, 7 sections, 1 figures. Code listings: `c`, `output`.
Scheduled for **2 sessions**, assessed by **HW2**.

## Sections

1. Introduction
2. while statement
3. do-while statement
4. for statement
5. Arrays
6. Advanced loops
7. Bugs and avoiding them

Each one produces an outline divider automatically, from the
`\AtBeginSection` hook in `../c-lecture.cls`.

## Notes

Arrays appear here **before** the arrays lecture, on purpose — a loop needs
something to iterate over. Lecture 9 then treats them properly. Keep the two
consistent if either changes. Uses `algorithm2e` for the loop pseudocode.

## Reminders

- The deck sets only `\subtitle`; author, title and institute come from
  `../c-lecture.cls`. Do not set them here.
- Any frame containing `minted` must be `\begin{frame}[fragile]`.
- Beamer does not fail on an overfull frame. Check the PDF after adding
  content, or use `[shrink]`.
