# Lecture 1 — Introduction

68 frames, 5 sections, 10 figures. Code listings: `c`, `gas`.
Scheduled for **2 sessions**, assessed by **HW1**.

## Sections

1. Introduction
2. What is this course?
3. Computer organization
4. Algorithms & Programming
5. Solving problems

Each one produces an outline divider automatically, from the
`\AtBeginSection` hook in `../c-lecture.cls`.

## Notes

The only deck that uses **`gas`** listings — the assembly appears in the
computer-organization section to show what the compiler produces. It is also
the deck with the most figures (10), because it is the one explaining
hardware. The instructor stack at the front (who I am → contact me → no
instant messaging) is the same policy `ie-lecture` and `is-lecture` state; if
the contact rule changes it changes in three places.

## Reminders

- The deck sets only `\subtitle`; author, title and institute come from
  `../c-lecture.cls`. Do not set them here.
- Any frame containing `minted` must be `\begin{frame}[fragile]`.
- Beamer does not fail on an overfull frame. Check the PDF after adding
  content, or use `[shrink]`.
