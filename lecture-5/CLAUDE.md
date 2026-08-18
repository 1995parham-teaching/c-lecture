# Lecture 5 — Interaction

36 frames, 3 sections, 1 figures. Code listings: `c`, `output`.
Scheduled for **2 sessions**, assessed by **HW2**.

## Sections

1. Produce output
2. Get input values
3. Common Bugs

Each one produces an outline divider automatically, from the
`\AtBeginSection` hook in `../c-lecture.cls`.

## Notes

`printf` and `scanf`. The **Common Bugs** section is the important half — the
missing `&` in `scanf`, and the format-specifier mismatch, are the two errors
that dominate the first assignments.

## Reminders

- The deck sets only `\subtitle`; author, title and institute come from
  `../c-lecture.cls`. Do not set them here.
- Any frame containing `minted` must be `\begin{frame}[fragile]`.
- Beamer does not fail on an overfull frame. Check the PDF after adding
  content, or use `[shrink]`.
