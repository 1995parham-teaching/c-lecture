# Lecture 11 — Structures

86 frames, 6 sections, 4 figures. Code listings: `c`, `output`.
Scheduled for **4 sessions**, assessed by **HW4**.

## Sections

1. Introduction
2. Struct Definition
3. Using Struct
4. Linked List
5. Enum Definition
6. Union Definition

Each one produces an outline divider automatically, from the
`\AtBeginSection` hook in `../c-lecture.cls`.

## Notes

The **Linked List** section is the payoff for lecture 10 and the subject of
its own workshop repository (`c-linked-list-workshop`). `enum` and `union`
come after it because they are small by comparison, not because they are less
useful.

## Reminders

- The deck sets only `\subtitle`; author, title and institute come from
  `../c-lecture.cls`. Do not set them here.
- Any frame containing `minted` must be `\begin{frame}[fragile]`.
- Beamer does not fail on an overfull frame. Check the PDF after adding
  content, or use `[shrink]`.
