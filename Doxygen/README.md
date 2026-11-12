# Doxygen — Documentation of a C++ Project

## Overview

This folder contains my work on documenting a small, multi-file C++ project using **Doxygen** as part of TW Lab 2025.

The assignment focused on understanding how source code can be documented using specially formatted comments. These comments allow Doxygen to extract information about files, classes, functions, parameters, return values, and other program elements, and organize it into readable documentation.

The project consists of a simple logging system and a calculation engine that uses the logger to report its operations.

## Project Structure

The assignment works with the following files:

| File | Purpose |
|---|---|
| `Logger.h` | Defines the logging functionality and log levels |
| `CalculationEngine.h` | Defines a mathematical calculation class that uses the logger |
| `main.cpp` | Provides the application entry point and main-page documentation |
| `Doxyfile` | Contains the configuration used by Doxygen |

## What the Project Does

### Logger

The `Logger` class provides a basic logging mechanism. It supports different levels of messages through the `LogLevel` enumeration:

- `Debug`
- `Info`
- `Warning`
- `Error`

It also supports a minimum logging threshold, allowing messages below the selected severity to be filtered out.

### CalculationEngine

The `CalculationEngine` class provides a `power()` operation that calculates a base raised to an integer exponent.

The class receives a `Logger` instance and uses it to report successful operations and errors. The implementation also considers negative exponents and the special case of raising zero to a negative exponent.

The source contains a TODO concerning the minimum integer exponent, where converting a negative exponent into a positive count can cause an integer overflow.

## Doxygen Documentation

A major part of this assignment was learning how to write documentation comments using Doxygen commands.

Some of the commands used in the project include:

| Command | Purpose |
|---|---|
| `@file` | Documents a source file |
| `@class` | Documents a class |
| `@brief` | Provides a short description |
| `@details` | Adds a more detailed explanation |
| `@param` | Describes a function parameter |
| `@return` | Describes a function's return value |
| `@throws` | Documents exceptions |
| `@enum` | Documents an enumeration |
| `@todo` | Marks work that still needs attention |
| `@mainpage` | Defines the main documentation page |

The assignment also required documenting the individual values of the `LogLevel` enumeration, the logger constructor, and the parameters and return value of `CalculationEngine::power()`.

## Configuring Doxygen

The `Doxyfile` controls how Doxygen processes the source files and generates documentation.

The checked-in configuration includes settings for:

- Project name and output directory.
- Input files and file patterns.
- Recursive source-file discovery.
- Extraction of documented and undocumented elements.
- Markdown and documentation-comment support.
- Warnings for undocumented elements and documentation errors.
- Source-code browsing.
- LaTeX documentation generation.

The output directory is configured as `docs`.

## Generating the Documentation

Install Doxygen on Ubuntu:

```bash
sudo apt install doxygen
```

From the directory containing the `Doxyfile`, run:

```bash
doxygen Doxyfile
```

The assignment also asks for PDF documentation to be generated from the LaTeX output. With the current output-directory configuration, the generated LaTeX files are expected under `docs/latex`.

```bash
cd docs/latex
make
```

This generates the documentation PDF, provided the required LaTeX tools are installed.

**Configuration note:** The assignment asks for both HTML and LaTeX output. However, the checked-in `Doxyfile` currently has `GENERATE_HTML = NO` and `GENERATE_LATEX = YES`. HTML generation will therefore need to be enabled in the configuration if both formats are required.

## What I Learned

This assignment helped me understand that useful software documentation is more than writing comments beside individual lines of code. Documentation needs to explain the purpose of files, classes, and functions, while also making their interfaces and behaviour understandable to someone reading the project for the first time.

It also introduced me to the idea of generating documentation automatically from source code. By keeping documentation comments alongside the implementation, Doxygen makes it easier to maintain documentation as a project evolves.

