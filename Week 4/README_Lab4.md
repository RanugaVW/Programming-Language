# Lab 4 - Simple Extensions to Tiny Compiler

## Goal of Lab 4
The goal of this lab is to extend the existing "Tiny" compiler-interpreter, which was developed in previous weeks, by adding more complex control structures and operators. Specifically, we are adding five new language constructs:
1. `for` loops (both `to` and `downto` variants).
2. `repeat ... until` loops.
3. `case` statements with `otherwise` clauses.
4. `loop ... pool` structures with `exit` capabilities.
5. The `swap` operator (`:=:`).

## What We Need to Understand
To successfully implement these extensions, we needed to deeply understand the four main stages of the Tiny compiler pipeline:
1. **Lexical Analysis (`lex.tiny`)**: How to define and recognize new text tokens (keywords, operators).
2. **Syntax Parsing (`parse.tiny`)**: How to define BNF grammar rules to structure these tokens into valid statements and resolve formatting conflicts (like list parsing).
3. **AST Constraint Checking (`Constrainer.c`)**: How to structurally validate these newly parsed trees, verifying that they are semantically correct (e.g., condition expressions must be `boolean`, array bounds must be `integer`).
4. **Intermediate Code Generation (`CodeGenerator.c`)**: How to translate these Abstract Syntax Trees into stack-based intermediate machine code, handling things like variable mutation, conditional jump branching (`COND`, `GOTO`), and stack manipulation (`DUPOP`, `POPOP`).

## What Have We Done
We executed a complete implementation plan modifying all four stages:
1. **Lexical**: Added Tokens for `for`, `to`, `downto`, `repeat`, `until`, `loop`, `pool`, `exit`, `case`, `of`, `otherwise`, `..`, and `:=:`.
2. **Parsing**: Added nested grammar statements mapping back to specific string identifiers for the AST builder to recognize.
3. **Constrainer**: Implemented structural validation logic. For example, enforcing `while`/`repeat` loops check for boolean conditions, and ensuring `swap` handles variables of the same underlying type.
4. **Code Generation**:
   - Implemented dynamic loops that set up indices, conditionally check bounds, execute the loop body, increment/decrement the index, and loop back.
   - Built a label tracking mechanism for `loop-pool-exit` so that nested `exit` statements jump to the correct end-of-loop label.
   - Translated `case` statements into sequential condition checks utilizing stack duplicating (`DUPOP`) to verify ranges (`..`).
   - Implemented `swap` variables by natively exchanging their stack evaluation values cleanly.

## Challenges Faced
1. **Case Statement Parsing**: By default, the `pgen` tool handles `list ';'` by requiring the list items to be separated by semicolons but *not* ending with one. Case statements needed to permit trailing semicolons correctly. We resolved this by changing the BNF grammar rule from `Caseclause list ';'` to `(Caseclause ';')*` which safely supported zero or more clauses with trailing semicolons.
2. **Boolean Equalities**: The `Constrainer` previously enforced `if (Type1 != TypeInteger) ...` on `=` and `<>` checks. This caused an issue when matching `done = true` since they were booleans. We updated the constrainer to accept equality matching for both `Boolean` and `Integer` domains.
3. **Swap Logic**: The initial swap logic was not properly exchanging values by emitting a redundant `SWAPOP` machine operation. We rectified this by leveraging the Reverse Polish Notation evaluating nature of the stack to naturally intercept and reverse the assignments cleanly without needing extra VM instructions.

## Updated Files
To complete this lab, we successfully modified the following base files:
- `tws/tws/tiny/parser/lex.tiny`
- `tws/tws/tiny/parser/parse.tiny`
- `tws/tws/tiny/Constrainer.c`
- `tws/tws/tiny/CodeGenerator.c`

## How to Test the Code
To test the compiler modifications on the provided Lab 4 test programs, follow these commands in your bash terminal:

1. **Navigate to the tiny compiler directory**:
   ```bash
   cd ~/Desktop/PL/Programming-Language/Week\ 4/tws/tws/tiny
   ```

2. **Re-compile the Tiny compiler** (cleans old binaries and rebuilds):
   ```bash
   make clean && make
   ```

3. **Run a test case (e.g., `pr2.c01`)**:
   Provide the absolute path to the test case as the argument to `./tc`.
   ```bash
   ./tc /home/ranuga-weerasekara/Desktop/PL/Programming-Language/Week\ 4/Lab4TestPrograms/pr2.c01
   ```
   Or using a relative path:
   ```bash
   ./tc ../../Lab4TestPrograms/pr2.c02
   ```
