# Week 2: Getting Started with TWS (Tiny Compiler System)

## What is this Assignment About?

This assignment (Lab 2) introduces us to the Tiny Compiler System (TWS) from the perspective of a Tiny language programmer.

**What is the "Tiny" Language?**
Tiny is _not_ a universal or real-world programming language (like Python or Java). It is an academic, instructional language developed specifically for teaching university students how compilers work. We are acting as a "programmer" for this made-up language to understand its constraints before we build/modify a compiler for it.

**Why `.txt` format?**
Compilers ultimately just read raw text. Because Tiny is an instructional language, it doesn't have a strict officially registered file extension. We write it in standard `.txt` simply because it's convenient and the compiler only cares about the textual content inside, not the file extension.

The goal is to write a program in the Tiny language (`230429E_230694J.txt`) that calculates the product of integers between two numbers `N` and `M`.

Because the Tiny language is highly restricted (it lacks a multiplication operator `*`, division, and subtraction, and only supports the `<=` comparison operator), we had to implement multiplication using nested `while` loops for repeated addition.

## What is the `tws` Folder?

The `tws` directory contains the source code for the **Tiny Compiler System**. It isn't just a single program, but a complete toolchain written in C that processes Tiny programs in stages:

1. **Scanner/Parser (`pgen`, `parse.tiny`, `lex`):** Reads your Tiny code and checks it for syntax errors.
2. **Constrainer (`Constrainer.c`):** Checks for contextual errors (like variable declarations and scoping).
3. **Code Generator (`CodeGenerator.c`):** Generates machine instructions (Target Machine Code) from your syntax tree.
4. **Interpreter (`interpret`):** A virtual machine that executes the generated code.

The main executable you interact with is `tc` (Tiny Compiler), which is a shell script that runs all these components in sequence.

**What does the `tc` script do?**
Instead of forcing you to manually type out four different commands every time you want to run your code (one for the parser, one for the constrainer, etc.), the `tc` (Tiny Compiler) file is provided. It is simply a handy "shell script" (an automated list of terminal commands) that automatically hands your `.txt` file to the Parser, takes the output and gives it to the Constrainer, and so on until it runs the Interpreter. It exists just to make running the code a one-step process!

## How We Resolved the Build Issues

The TWS source code is quite old (written in legacy C89 standard) and was failing to compile on your modern 64-bit Linux environment. Here is how we fixed it:

1. **Multiple Definition Linker Errors:** Modern GCC compilers default to stricter linking policies (`-fno-common`). We had to adjust Makefiles to use `-fcommon` and manually define global tables (like `DclnTable`) in the C source files while keeping them as `extern` in the headers.
2. **IDE Auto-Formatter Conflicts:** An auto-formatter was sorting header `#include` statements alphabetically, causing `Table.h` to be included after `Dcln.h`, which completely broke pointer definitions. We used `/* clang-format off */` directives to lock the includes in the correct semantic order.
3. **64-bit Pointer Truncation (Segfaults):** The parser generator (`pgen`) and interpreter were crashing with Segmentation Faults (Code 139). This happened because POSIX functions like `strdup()` were not explicitly prototyped under the strict `-ansi` flag, causing GCC to implicitly assume they returned 32-bit integers, thereby truncating the 64-bit memory addresses. We fixed this by providing explicit `char *strdup(const char *);` prototypes and removing conflicting compiler flags.
4. **Tiny Syntax Fixes:** Your Tiny program initially used unsupported multiplication operators. We changed it to repeated addition. We also fixed a syntax error where the `if` statement lacked an `else` block (which is strictly required by the Tiny parser).

## How to Test the Program

To run the program and test your Tiny code, navigate to the `tiny` directory and run the `tc` compiler script against your text file. You can either run `./tc` and type numbers interactively, or pipe numbers into the compiler script.

```bash
cd "Desktop/PL/Programming-Language/Week 2/tws/tws/interpreter"
make clean && make

cd "/home/ranuga-weerasekara/Desktop/PL/Programming-Language/Week 2/tws/tws"
make all

#If needed
make clean

# First, navigate to the tiny compiler bin directory
cd "tws/tws/tiny"

# Test with inputs N=2 and M=5 (Product: 2 * 3 * 4 * 5 = 120)
echo -e "2\n5" | ./tc ../../../230429E_230694J.txt

# Test with inputs N=5 and M=2 (Should also be 120)
echo -e "5\n2" | ./tc ../../../230429E_230694J.txt
```

When you run it, you should see the compiler output its stages sequentially (Parsing -> Constrainer -> CodeGenerator -> Interpreter), followed by the execution output `120`.

## Detailed Execution Flow

When you run `echo -e "2\n6" | ./tc ../../../230429E_230694J.txt`, the following step-by-step execution flow occurs:

1. **Input via Pipe**: The `echo -e "2\n6"` command sends the numbers `2` and `6` (separated by a newline) to the standard input of the subsequent command through the pipe (`|`).
2. **The `tc` Wrapper**: The `./tc` script is invoked with `../../../230429E_230694J.txt` as its argument, which is the path to your Tiny language program.
3. **Parsing**: The script runs `parser/parse < ${INPUT}`. This reads your `.txt` file, checks for syntax errors, and creates an intermediate abstract syntax tree file (`_TREE`).
4. **Constrainer**: The script runs `$MYOBJS/Constrain -trace _CONS`. This reads the parsed tree, performs type and scope checking, and updates the intermediate files.
5. **Code Generator**: The script runs `$MYOBJS/CodeGen -trace _CGEN`. This takes the checked syntax tree and generates abstract machine instructions (Target Machine Code) for the Tiny virtual machine, saving them to a file named `_CODE`.
6. **Interpreter Execution**: Finally, the script runs the `$TWS/bin/interpret` virtual machine.
   - The interpreter loads the generated instructions from the `_CODE` file.
   - Upon encountering input instructions (e.g., `read` statements in your Tiny code), the interpreter reads from its standard input. Since we piped `2\n6` into `./tc` at the very beginning, these values are automatically consumed by the `read` instructions.
   - The Tiny code computes the product (2 _ 3 _ 4 _ 5 _ 6 = 720).
   - The `write` instruction in the Tiny code outputs the final result (`720`) to the terminal.
