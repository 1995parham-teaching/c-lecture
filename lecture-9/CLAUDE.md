# Lecture 9 — Arrays

54 frames, 6 sections, 3 figures. Code listings: `c`, `output`.
Scheduled for **4 sessions**, assessed by **HW3**.

## Sections

1. Introduction
2. Arrays in functions
3. Multidimensional arrays
4. String
5. String functions
6. Bugs and avoiding them

Each one produces an outline divider automatically, from the
`\AtBeginSection` hook in `../c-lecture.cls`.

## Notes

Strings are taught as arrays here, before pointers — which is the right order,
because the null terminator is easier to see in an array than through a
pointer. _Arrays in functions_ is where array decay first appears, and lecture
10 completes it.

## Reminders

- The deck sets only `\subtitle`; author, title and institute come from
  `../c-lecture.cls`. Do not set them here.
- Any frame containing `minted` must be `\begin{frame}[fragile]`.
- Beamer does not fail on an overfull frame. Check the PDF after adding
  content, or use `[shrink]`.
