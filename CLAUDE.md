# c-lecture

Slide decks for the **Fundamentals of Computer and Programming** course at
Amirkabir University of Technology — an introduction to programming, taught in
C. The slides are [Beamer](https://ctan.org/pkg/beamer), built with XeLaTeX.

Per-lecture notes live in `lecture-<n>/CLAUDE.md`.

This repository is a sibling of
[`ie-lecture`](https://github.com/1995parham-teaching/ie-lecture) and
[`is-lecture`](https://github.com/1995parham-teaching/is-lecture) and follows
the same repository conventions — a root `CLAUDE.md`, per-deck notes, a format
gate and a build gate in CI, a `justfile`, and Dependabot. **The decks
themselves are LaTeX, not Hugo and reveal.js, so nothing in the layout or
styling transfers between them.** Only the conventions do.

## Provenance

All of these slides are based on
[Prof. Bakhshi](https://github.com/Bahador-Bakhshi)'s slides for the same
course. That attribution is in the README and should stay there.

## Build

```bash
just all              # every lecture   (make all)
just build lecture-8  # one lecture     (cd lecture-8 && latexmk)
just dist             # collect into lectures.tar.gz
```

Requirements, and each one is a way the build fails if missing:

- **XeLaTeX**, not pdfLaTeX. Each `latexmkrc` sets `$pdf_mode = 5`.
- **Pygments** (`pip install pygments`). The listings use `minted`, which shells
  out to `pygmentize`. Without it every code frame fails.
- **`--shell-escape`**, which is why `latexmkrc` sets
  `$xelatex = "xelatex --shell-escape %O %S"`. Removing it breaks `minted` with
  an error that does not mention `minted`.
- The CTAN packages listed in the README: `datetime2`, `fmtcount`,
  `algorithm2e`, `ifoddpage`, `relsize`, `tracklang`.

Two CI gates, both on every push and PR:

| Workflow     | What it does                                                  |
| ------------ | ------------------------------------------------------------- |
| `format.yml` | `npx prettier --check .` over the markdown and YAML           |
| `build.yml`  | builds all 14 lectures, **one job each**, and uploads the PDF |

The build matrix is `fail-fast: false` on purpose — one lecture breaking should
not hide the state of the other thirteen. Prettier does not touch `.tex` or
`.cls`; they are in `.prettierignore` so that is explicit rather than incidental.

There is no TeX toolchain on the maintainer's machine, so **CI is the only place
these are known to build.** Do not assume a change compiles because it looks
right.

## Layout

```
c-lecture.cls          the shared Beamer class — theme, author, title, code style
lecture-<n>/main.tex   one lecture
lecture-<n>/latexmkrc  per-lecture build settings (xelatex, shell-escape)
lecture-<n>/img/       figures for that lecture
Makefile               builds every lecture-*/main.pdf
```

## The class file

`c-lecture.cls` is where everything shared lives, and a deck should not
override it locally:

- Beamer with the **Boadilla** theme and the **crane** colour theme,
  `secheader` on.
- `\author`, `\title` (_Fundamentals of Computer and Programming_) and
  `\institute` are set **once, in the class**. A deck only sets `\subtitle`.
- `minted` with the **one-dark** style.
- Navigation symbols are suppressed deliberately.
- `\AtBeginSection` emits an **Outline** frame with `currentsection`
  highlighted, so every deck gets section dividers for free. Do not hand-write
  one.

A new lecture is therefore:

```latex
\documentclass{../c-lecture}
\subtitle{Topic}
\begin{document}
...
\end{document}
```

## Conventions

- **One `\subtitle` per deck**, and it is what identifies the lecture. The
  per-lecture notes and the README table both use it.
- **Sections drive the outline.** `\section{...}` produces a divider frame, so
  sections are the deck's structure, not decoration.
- **Code is `minted`**, and the languages in use are `c`, `output` (for program
  output) and `gas` (assembly, lecture 1 only). Keep `output` for output —
  it is what makes the distinction visible on the slide.
- **Figures live in the deck's own `img/`.** Nothing is shared between lectures.
- `.gitignore` excludes `*.pdf`, so **built slides are never committed**. The
  release artifacts come from CI.

## Things that fail silently

- **Frame overflow.** Beamer will happily run content off the bottom of a frame.
  It warns (`Overfull \vbox`) but the build still succeeds and the PDF still
  looks fine until the slide you did not check. Use `\begin{frame}[shrink]` or
  split the frame.
- **`minted` and `fragile`.** A frame containing `minted` must be
  `\begin{frame}[fragile]`. Forgetting it produces an error a long way from the
  cause.
- **`&` in a section title** must be escaped as `\&` — several already are, and
  they are the reason the section list reads oddly in a grep.
