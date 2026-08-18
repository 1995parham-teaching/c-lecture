<h1 align="center"> C Programming Lecture </h1>

<p align="center">
  <img alt="GitHub Workflow Status" src="https://img.shields.io/github/actions/workflow/status/1995parham-teaching/c-lecture/build.yml?logo=github&style=for-the-badge">
  <img alt="GitHub repo size" src="https://img.shields.io/github/repo-size/1995parham-teaching/c-lecture?logo=github&style=for-the-badge">
</p>

## Introduction

Lecture slides and sample code for the **Fundamentals of Computer and
Programming** course — an introduction to programming, taught in C.

The slides are Beamer, built with XeLaTeX. All of them are based on
[Prof. Bakhshi](https://github.com/Bahador-Bakhshi)'s slides for the same
course.

## How to Run

You need a TeX distribution with XeLaTeX, `latexmk`, and Pygments — the code
listings use `minted`, which shells out to Pygments and therefore needs
`--shell-escape` (already set in each lecture's `latexmkrc`).

```bash
sudo tlmgr install datetime2 fmtcount algorithm2e ifoddpage relsize tracklang
pip install pygments

just all            # or: make all
just build lecture-8
```

Each lecture builds to `<lecture>/main.pdf`. `just dist` collects them into
`lectures.tar.gz`.

CI builds all fourteen on every push and pull request, one job per lecture, so
a break is attributed to the lecture that caused it.

## Taught in

- Amirkabir University of Technology
- Shahid Beheshti University

## Topics and Schedule

| #                | Topic                       | Sessions | Assignment |
| ---------------- | --------------------------- | -------- | ---------- |
| [1](lecture-1)   | Introduction                | 2        | HW1        |
| [2](lecture-2)   | Algorithm Design            | 2        | HW1        |
| [3](lecture-3)   | C Programming Basics        | 3        | HW2        |
| [4](lecture-4)   | Calculation                 | 2        | HW2        |
| [5](lecture-5)   | Interaction                 | 2        | HW2        |
| [6](lecture-6)   | Making Decisions            | 2        | HW2        |
| [7](lecture-7)   | Repeating Statements        | 2        | HW2        |
| [8](lecture-8)   | Functions                   | 3        | HW3        |
| [9](lecture-9)   | Arrays                      | 4        | HW3        |
| [10](lecture-10) | Pointers and Dynamic Memory | 4        | HW3        |
| [11](lecture-11) | Structures                  | 4        | HW4        |
| [12](lecture-12) | Files                       | —        |            |
| [13](lecture-13) | Miscellaneous               | —        |            |
| [14](lecture-14) | Buckle Up                   | —        |            |

- **HW1** — Introduction, Algorithm Design
  - [Watch me](https://youtu.be/2yAZT_uDpuA)
- **HW2** — C Programming Basics, Calculation, Interaction, Making Decisions,
  Repeating Statements
- **HW3** — Functions, Arrays and Pointers
- **HW4** — Structs and Linked List

## Related

- [go-lecture](https://github.com/1995parham-teaching/go-lecture) — the natural
  next language, and the README there says the C background is required
- [TanhaDarKhaneh](https://github.com/1995parham-teaching/TanhaDarKhaneh) —
  learn to code with C at home
- [c-linked-list-workshop](https://github.com/1995parham-teaching/c-linked-list-workshop) —
  a workshop on linked lists and structures, following lecture 11
- [c-exam](https://github.com/1995parham-teaching/c-exam) — midterm and final
  questions
