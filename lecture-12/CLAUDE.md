# Lecture 12 — Files

55 frames, 4 sections, 1 figures. Code listings: `c`, `output`.

## Sections

1. Introduction
2. Text File Operations
3. Binary File Operations
4. Bugs and avoiding them

Each one produces an outline divider automatically, from the
`\AtBeginSection` hook in `../c-lecture.cls`.

## Notes

Uses `tabularx` — the only deck that does — for the mode-string table. The
text/binary split is the spine, and the bugs section is mostly about
forgetting to check the return of `fopen`.

## Reminders

- The deck sets only `\subtitle`; author, title and institute come from
  `../c-lecture.cls`. Do not set them here.
- Any frame containing `minted` must be `\begin{frame}[fragile]`.
- Beamer does not fail on an overfull frame. Check the PDF after adding
  content, or use `[shrink]`.
