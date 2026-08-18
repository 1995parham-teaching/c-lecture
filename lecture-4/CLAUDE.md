# Lecture 4 — Calculation

35 frames, 7 sections, 1 figures. Code listings: `c`.
Scheduled for **2 sessions**, assessed by **HW2**.

## Sections

1. Basic mathematic operations in C
2. Effect of type and type conversion
3. Precedence
4. Advanced mathematical operations
5. Mathematic library
6. Random Numbers
7. Type-generic math

Each one produces an outline divider automatically, from the
`\AtBeginSection` hook in `../c-lecture.cls`.

## Notes

Seven sections in 35 frames, so the sections are short by design. _Type-
generic math_ (`<tgmath.h>`) is the one section students will not have seen
elsewhere; it is last so it can be dropped when the term runs short.

## Reminders

- The deck sets only `\subtitle`; author, title and institute come from
  `../c-lecture.cls`. Do not set them here.
- Any frame containing `minted` must be `\begin{frame}[fragile]`.
- Beamer does not fail on an overfull frame. Check the PDF after adding
  content, or use `[shrink]`.
