# Lecture 6 — Making Decisions

46 frames, 5 sections, 2 figures. Code listings: `c`, `output`.
Scheduled for **2 sessions**, assessed by **HW2**.

## Sections

1. Conditions and Boolean operations
2. if-else statement
3. switch-case statement
4. Conditional expressions
5. Common Bugs

Each one produces an outline divider automatically, from the
`\AtBeginSection` hook in `../c-lecture.cls`.

## Notes

The **Common Bugs** section covers `=` versus `==` and the dangling `else`.
Both are worth the frames they take; they are the errors that compile.

## Reminders

- The deck sets only `\subtitle`; author, title and institute come from
  `../c-lecture.cls`. Do not set them here.
- Any frame containing `minted` must be `\begin{frame}[fragile]`.
- Beamer does not fail on an overfull frame. Check the PDF after adding
  content, or use `[shrink]`.
