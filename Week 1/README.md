# CS 3513 Programming Languages: Lab 1

## Lexical Scanner for RPAL

### What is the assignment about?

This is **Lab 1** for the Programming Languages course, where the goal is to implement a **Lexical Scanner** (also called a Lexer or Tokenizer) for a functional language called RPAL.

The scanner reads raw text (source code) and converts it into a structured sequence of "Tokens."

### How do you do that?

Using a state-machine or a loop-based approach (as implemented in `lab1_230694J_230429E.cpp`), the program reads the incoming source code character by character:

1. It skips any whitespace (spaces, tabs, newlines) and comments (`//`).
2. When it sees an alphabet letter, it grabs the subsequent valid characters to form an **Identifier** (like `x` or `Sum`). It then checks this against a list of recognized words to see if it's actually a **Keyword** (like `let` or `in`).
3. When it sees a digit, it forms an **Integer**.
4. When it sees punctuation or symbols, it forms **Operators** (`+`, `=`, `->`) or **Punctuation** (`(`, `,`, `)`).
5. It prints each matched token in a specific format: `<TYPE, "VALUE">`.

### What is the aim of this?

Lexical analysis is the very **first phase of building a compiler or an interpreter**.

A computer cannot easily understand raw text characters like `let x = 5`. The scanner removes the "noise" (like spaces and comments) and groups the text into meaningful logical units—**Tokens**.

These tokens are then passed to the next phase (the Parser), which reads the tokens to understand the grammatical structure and build an Abstract Syntax Tree (AST). Without a lexical scanner, translating code into machine instructions would be significantly more difficult!
