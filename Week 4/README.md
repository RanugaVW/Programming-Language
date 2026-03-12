# CS3513 Programming Languages — Week 3 Lab

## Simple Extensions to Tiny

---

## What Is This Lab?

This lab extends **Tiny**, a small educational programming language, with new operators, constants, and features. The goal is to deepen understanding of how lexers, parsers, type-checkers (constrainers), and code generators work together by adding real language features to an existing compiler.

---

## Relationship to Week 2

> **Yes — this lab builds directly on Week 2.**

The `tws/` (Tiny Workbench System) folder in Week 3 is the **same base system** as Week 2. In Week 2, you worked with the original Tiny compiler. In Week 3, you extend it. The four files you modify (`lex.tiny`, `parse.tiny`, `Constrainer.c`, `CodeGenerator.c`) live inside the same `tws/tws/tiny/` directory structure.

---

## What Was Done

### 1. New Binary Operators (`parse.tiny` + `lex.tiny`)

Added to the grammar and lexer:

- `and`, `or`, `=`, `<>`, `>=`, `<`, `>`, `-`, `*`, `**`, `/`, `mod`

### 2. New Unary Operators

- Unary `+`, unary `-`, `not`

### 3. Operator Precedence (highest → lowest)

| Precedence | Operator(s)                     | Associativity |
| ---------- | ------------------------------- | ------------- |
| Highest    | `**`                            | Right         |
|            | Unary `-`, `+`, `not`           | Right         |
|            | `*`, `/`, `and`, `mod`          | Left          |
|            | `+`, `-`, `or`                  | Left          |
| Lowest     | `<=`, `=`, `<>`, `>=`, `<`, `>` | None          |

### 4. Boolean Constants (`parse.tiny` + `lex.tiny`)

- `true` and `false` keywords added

### 5. `eof` Intrinsic Function (`parse.tiny` + `lex.tiny`)

- Allows: `while not eof do output(read);`

### 6. Optional `else` Clause (`parse.tiny`)

- `if` statements no longer require an `else` branch

### 7. Multiple Expressions in `output` (`parse.tiny`)

- `output(expr1, expr2, ...)` now supported

### 8. Code Generation (`CodeGenerator.c`)

- Code generation added for all new operators, `true`/`false`, and `eof`

### 9. Type Checking (`Constrainer.c`)

- Constrainer handles optional `else` (checks `Rank(T) == 3`) and multiple output expressions

---

## Submission Files

The `submission/` folder contains exactly the 4 required files:

```
submission/
├── lex.tiny          # Lexer (flex input)
├── parse.tiny        # Parser + grammar (yacc/bison input)
├── Constrainer.c     # Type checker
└── CodeGenerator.c   # Code generator
```

---

## How to Build

```bash
cd ~/Desktop/PL/Programming-Language/Week\ 3/tws/tws
make
```

---

## How to Test

### Understanding `.c` vs `.e` Test Files

The test suite contains two types of Tiny programs:

- **`.c` files (e.g., `pr1.c01`)**: These are **Correct** programs. They contain valid Tiny code with properly declared variables and valid type semantics. The compiler easily parses, constrains, and executes them (outputting exactly what the program defines).
- **`.e` files (e.g., `pr1.e01`)**: These are **Error** programs. They contain deliberate semantic errors—such as using variables like `a`, `x`, or `d` that were **never declared**. When you run them, the `Constrainer` correctly catches these issues and prints `<<< CONSTRAINER ERROR >>> AT L6/C1 : <identifier> a NOT DECLARED.`. This proves the compiler's scoping and type-checking rules are working flawlessly!

All tests are run using the `tc` shell script inside the `tiny/` directory. This script chains: **parse → Constrain → CodeGen → interpret**.

### Build (confirm no compile errors)

```bash
cd ~/Desktop/PL/Programming-Language/Week\ 3/tws/tws
make clean
make
```

### Run a correct test program

```bash
cd ~/Desktop/PL/Programming-Language/Week\ 3/tws/tws/tiny
./tc test-progs/pr1.c01
```

Correct programs are `pr1.c01` through `pr1.c06`:

```bash
for i in 01 02 03 04 05 06; do
  echo "=== pr1.c$i ==="
  ./tc test-progs/pr1.c$i
done
```

### Run an error test program (expect error output)

```bash
./tc test-progs/pr1.e01
```

Error programs are `pr1.e01` through `pr1.e05`:

```bash
for i in 01 02 03 04 05; do
  echo "=== pr1.e$i ==="
  ./tc test-progs/pr1.e$i
done
```

### Test `eof` interactively

```bash
cd ~/Desktop/PL/Programming-Language/Week\ 3/tws/tws/tiny
./tc
# Enter a Tiny program manually, then press Ctrl+D to signal end-of-file
```

### Run only the parser (no constrain/codegen)

```bash
cd ~/Desktop/PL/Programming-Language/Week\ 3/tws/tws/tiny
./tc_parse test-progs/pr1.c01
```

---

## Important Submission Notes

- ⚠️ The `.zip` file must contain **exactly 4 files** — no subfolders
- ✅ Zip from inside the `submission/` directory:
  ```bash
  cd ~/Desktop/PL/Programming-Language/Week\ 3/submission
  zip ../submission.zip lex.tiny parse.tiny Constrainer.c CodeGenerator.c
  ```
- 🔁 After submitting: **download it, unzip it, compile it, run it** to verify

---

## Project Structure

```
Week 3/
├── Lab3_1.pdf          # Lab instructions
├── README.md           # This file
├── project3.tar.gz     # Original project archive
├── submission/         # Files to submit
│   ├── lex.tiny
│   ├── parse.tiny
│   ├── Constrainer.c
│   └── CodeGenerator.c
└── tws/
    └── tws/            # Tiny Workbench System (same base as Week 2)
        ├── Makefile
        ├── tiny/       # Tiny language files (modified for Lab 3)
        ├── header/     # Header files
        ├── code/       # Core compiler source
        └── bin/        # Compiled binaries
```
