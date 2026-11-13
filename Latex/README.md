# LaTeX — Technical and Mathematical Document Preparation

## Overview

This folder contains my LaTeX assignments from TW Lab 2025.

The exercises explore how LaTeX can be used to create structured technical documents, particularly when the content involves mathematical expressions, equations, tables, figures, and carefully formatted sections.

The assignments gradually introduce different aspects of LaTeX, starting with mathematical typesetting and moving towards more complex document layouts and formatting.

## Assignments

### Assignment 2 — Mathematical Expressions and Equations

This assignment focuses on using LaTeX for mathematical typesetting.

The source covers several mathematical constructs, including:

- Inline and displayed mathematical expressions.
- Fractions, roots, and mathematical symbols.
- Greek letters and mathematical notation.
- Summations and binomial expressions.
- Derivatives, partial derivatives, and integrals.
- Aligned and multiline equations.
- Matrices with different delimiters, including brackets, parentheses, and determinant-style delimiters.

Packages such as `amsmath`, `amssymb`, `amsfonts`, and `graphicx` are included in the source.

A particularly useful part of this exercise was working with mathematical environments such as `align` and learning how LaTeX handles the alignment of equations across multiple lines.

### Assignment 3 — Advanced Mathematical Structures and Tables

This assignment builds on the mathematical typesetting concepts introduced earlier and explores more complex structures.

The source includes:

- Overbraces and underbraces.
- Arrays and piecewise mathematical expressions using `cases`.
- Matrix-based mathematical layouts.
- Tables with multiple rows and columns.
- Multirow table structures.
- Custom column widths and alignment.
- Coloured rows and cells.
- Professional table rules using `booktabs`.

The source uses packages such as `amsmath`, `multirow`, `xcolor`, `colortbl`, `array`, and `booktabs`.

This exercise demonstrates that LaTeX is not limited to writing equations. It can also be used to create structured tables and combine mathematical and tabular content within the same document.

### Assignment 4 — Lists, Tables, Colours, and Figures

This assignment explores the visual and structural elements used in technical documents.

The source covers three common types of markup:

- Presentational markup.
- Procedural markup.
- Descriptive markup.

It also demonstrates how to organize information using:

- `itemize` environments for bullet lists.
- `enumerate` environments for numbered lists.
- `description` environments for labelled entries.
- Tables with controlled column widths and placement.
- Custom colours defined using RGB values and colour combinations.
- Text colouring using `\textcolor`.
- Figures inserted using `\includegraphics`.
- Figure placement using the `figure` environment.
- Layouts involving `minipage` and `\hfill`.

The assignment also explores image manipulation tasks such as rotation and cropping.

This was useful for understanding how LaTeX handles visual content and how figures, text, and tables can be arranged within a document.

### Assignment 5 — Structuring and Formatting Longer Documents

This assignment moves towards the creation of a more complete, report-style document.

The source uses the `report` document class with a 12-point font and A4 paper size. It also uses packages such as `geometry`, `xcolor`, `sectsty`, and `fancyhdr`.

The document demonstrates:

- Creating a title page.
- Adding an abstract.
- Organizing content into chapters, sections, and subsections.
- Customizing chapter and section headings.
- Applying colours and font formatting to headings.
- Configuring page headers and footers.
- Defining page styles using `fancyhdr`.

This assignment helped bring together several of the earlier concepts into a longer document with a more formal structure.

## Concepts and Tools Used

Across these assignments, I worked with a range of LaTeX commands and environments.

| Area | Examples |
|---|---|
| Document structure | `\documentclass`, `\begin{document}`, `\end{document}` |
| Mathematics | `equation`, `align`, `cases`, `matrix` |
| Lists | `itemize`, `enumerate`, `description` |
| Tables | `tabular`, `multirow`, `booktabs` |
| Figures | `figure`, `\includegraphics` |
| Formatting | `\textcolor`, `\definecolor`, font commands |
| Page layout | `geometry`, `fancyhdr` |
| Document hierarchy | `\chapter`, `\section`, `\subsection` |

## Files

The folder contains the LaTeX source files for Assignments 2–5, along with compiled PDF outputs in the `Assignments/Compiled PDFs` directory.

The source files are the primary reference for the topics and techniques described in this README.

## Compiling the Documents

A working LaTeX distribution is required.

For an individual assignment, navigate to the directory containing its `.tex` file and run:

```bash
pdflatex Assgn2.tex
```

Replace the filename with the relevant assignment source file when compiling the other assignments.

Some documents may require additional compilation passes or installed packages, depending on their contents.

## What I Learned

These assignments gave me a practical understanding of LaTeX as a document preparation system.

I learned how to represent mathematical expressions clearly, structure complex equations, organize tables, insert and position figures, and customize the appearance of longer documents.

An important takeaway was that LaTeX separates the content of a document from many aspects of its presentation. By using commands, environments, and packages, it becomes possible to maintain consistent formatting even in documents containing complicated mathematical and technical material.

## Screenshots

![alt text](assets/image-latex.png)