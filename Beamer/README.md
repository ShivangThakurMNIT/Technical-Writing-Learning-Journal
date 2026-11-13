# Beamer — Creating Presentations with LaTeX

## Overview

This folder contains my work on creating presentations using **LaTeX Beamer**.

The assignment involved preparing a short presentation titled *Introduction to LaTeX*. Instead of using a conventional presentation editor, I used LaTeX's Beamer document class to structure the slides and control their formatting through source code.

The presentation uses the **Singapore** theme and introduces the purpose of LaTeX, its applications, and the basic structure of a LaTeX document.

## What the Presentation Covers

The presentation is organized into four frames:

1. **Title Slide:** Introduces the presentation and its author.
2. **What is LaTeX?:** Explains what LaTeX is and why it is useful for professional, academic, and technical writing.
3. **Structure and Formatting:** Introduces the basic organization of a LaTeX document, including the document class, preamble, body, and packages.
4. **Conclusion:** Wraps up the presentation.

## Concepts Practised

While working on this presentation, I explored:

- Using `\documentclass{beamer}` to create a slide-based document.
- Selecting a presentation theme using `\usetheme`.
- Creating individual slides using the `frame` environment.
- Defining a title, author, institute, and date.
- Organizing information with bullet points and numbered lists.
- Applying basic formatting commands such as `\texttt` and `\vspace`.
- Using packages to extend the formatting capabilities of a LaTeX document.

The source also introduces packages such as `geometry`, `xcolor`, `sectsty`, and `fancyhdr`, which are useful for controlling different aspects of document formatting.

## Files

- `Assignments/Solution.tex` — LaTeX source code for the presentation.
- `Assignments/Solution.pdf` — Compiled presentation.

## Compiling the Presentation

A LaTeX distribution with Beamer support is required.

From the directory containing `Solution.tex`, run:

```bash
pdflatex Solution.tex
```

This generates the presentation as a PDF.

## What I Learned

This exercise helped me understand how presentations can be created using the same typesetting system used for technical documents. Beamer makes it possible to define slide structure and formatting directly in source code, which is particularly useful when working with technical material that needs consistent formatting.

It also gave me a practical introduction to the idea that a presentation can be treated as a structured document rather than simply a collection of individually designed slides.

## Screenshots

![alt text](assets/image-beamer.png)