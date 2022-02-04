\ProvidesClass{c-lecture}
              [Parham Alvani's theme for C programming course]

\RequirePackage[dvipsnames]{xcolor}
\RequirePackage{booktabs}

\LoadClass[]{beamer}

\usetheme[secheader]{Boadilla}
\usecolortheme{crane}

\author[Parham Alvani]{%
  Parham Alvani\\
  \texttt{parham.alvani@gmail.com}
}
\title{Fundamentals of Computer and Programming}
\institute[AUT]{Amirkabir University of Technology}
\date{\today}

\AtBeginSection[]
{%
  \begin{frame}
    \frametitle{Outline}
    \tableofcontents[currentsection]
  \end{frame}
}
