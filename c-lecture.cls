\ProvidesClass{c-lecture}
              [Parham Alvani's theme for C programming course]

\RequirePackage[dvipsnames]{xcolor}
\RequirePackage{booktabs}
\RequirePackage{minted}
\RequirePackage[useregional,calc,warn=false]{datetime2}

\DTMnewdatestyle{mmyy}{%
  \renewcommand*{\DTMdisplaydate}[4]{\DTMmonthname{##2} ##1}%
  \renewcommand*{\DTMDisplaydate}{\DTMdisplaydate}%
}

\LoadClass[]{beamer}

\usemintedstyle{one-dark}

\usetheme[secheader]{Boadilla}
\usecolortheme{crane}

\author[Parham Alvani]{%
  Parham Alvani\\
  \texttt{parham.alvani@gmail.com}
}
\title{Fundamentals of Computer and Programming}
\institute[AUT]{Amirkabir University of Technology}
\date{\DTMsetdatestyle{mmyy}\Today}

\AtBeginSection[]
{%
  \begin{frame}
    \frametitle{Outline}
    \tableofcontents[currentsection]
  \end{frame}
}
