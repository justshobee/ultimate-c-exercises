# Ultimate C Exercises — 350+ Exercises!

<div align="center">

[![GitHub stars](https://img.shields.io/github/stars/justshobee/ultimate-c-exercises?style=for-the-badge)](https://github.com/justshobee/ultimate-c-exercises/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/justshobee/ultimate-c-exercises?style=for-the-badge)](https://github.com/justshobee/ultimate-c-exercises/network)
[![GitHub issues](https://img.shields.io/github/issues/justshobee/ultimate-c-exercises?style=for-the-badge)](https://github.com/justshobee/ultimate-c-exercises/issues)
[![Exercises](https://img.shields.io/badge/Exercises-350%2B-brightgreen?style=for-the-badge)](#)

**A comprehensive collection of 350+ C programming exercises designed to solidify fundamental concepts through hands-on practice.**

*Perfect for beginners and anyone looking to master C programming from basics to advanced pointers!*

</div>

---

## Overview

Welcome to **Ultimate C Exercises**! This repository is your go-to resource for learning and practicing the C programming language. Whether you're a complete beginner or looking to refresh your skills, you'll find carefully structured exercises that progressively build your understanding of core C concepts.

This collection covers everything from basic syntax to pointers, providing hands-on practice for each fundamental pillar of C programming.

---

## Key Features

* **Structured Learning Path** — Exercises organized by topic with progressive difficulty levels  
* **Beginner-Friendly** — Clear explanations and examples to help you get started  
* **Comprehensive Coverage** — Topics range from basics to pointers and data structures  
* **Hands-on Practice** — Learn by doing with real coding challenges  
* **Well-Organized** — Easy to navigate through different programming concepts  
* **Extensive Exercises** — 300+ exercises across 7 major topics

---

## Tech Stack

**Language:**  
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

**Recommended Compilers:**  
![GCC](https://img.shields.io/badge/GCC-C6C6C6?style=for-the-badge&logo=gnu-compiler-collection&logoColor=black)
![Clang](https://img.shields.io/badge/Clang-FE6624?style=for-the-badge&logo=llvm&logoColor=white)

---

## Quick Start

### Prerequisites

To compile and run the C programs in this repository, you need:

- **A C Compiler** (GCC, Clang, or MSVC)
  - **Linux:** Usually pre-installed. If not: `sudo apt-get install gcc` (Ubuntu/Debian) or `sudo dnf install gcc` (Fedora)
  - **macOS:** Install Xcode Command Line Tools: `xcode-select --install`
  - **Windows:** Download and install [MinGW](http://www.mingw.org/) or use Windows Subsystem for Linux (WSL)

### Installation & Setup

1. **Clone the repository**
   ```bash
   git clone https://github.com/justshobee/ultimate-c-exercises.git
   cd ultimate-c-exercises
   ```

2. **Navigate to a section** (e.g., C Basics)
   ```bash
   cd 01_c_basics
   ```

3. **Choose an exercise** (e.g., ex01)
   ```bash
   cd ex01
   ls -la
   ```

### Compiling & Running Your First Program

Inside each exercise directory, you'll find `.c` source files. Here's how to compile and run them:

```bash
# Compile the source file
gcc program_name.c -o program_name

# Run the compiled executable
./program_name
```

**Example:**
```bash
gcc hello_world.c -o hello_world
./hello_world
```

### Using Different Compilers

```bash
# Using Clang instead of GCC
clang program_name.c -o program_name

# Compile with warnings enabled (recommended)
gcc -Wall -Wextra program_name.c -o program_name
```

---

## Project Structure

```
ultimate-c-exercises/
├── 01_c_basics/                 # Hello World, syntax, basic I/O, comments (48 exercises)
├── 02_variables_data_types/     # Variables, int, float, char, sizeof() (21 exercises)
├── 03_loops/                    # for, while, do-while, nested loops (28 exercises)
├── 04_functions/                # Function definition, parameters, return types (25 exercises)
├── 05_arrays/                   # 1D arrays, 2D arrays, array operations (40 exercises)
├── 06_strings/                  # String manipulation, character arrays, functions (30 exercises)
├── 07_pointers/                 # Pointers basics, dereferencing, arrays of pointers (60+ exercises)
├── 08_structs_unions/           # Structs, unions, nested structures, typedef (45 exercises)
└── README.md                    # You are here!
```

---

## Course Outline & Learning Path

### 1. C Basics (`01_c_basics/`)
**48 Exercises** | *Duration: 1-2 weeks*

Start your C journey here! Learn fundamental concepts like program structure, printing output, accepting input, and working with operators.

**Topics Covered:**
- Hello World program
- Basic syntax and structure
- `printf()` and `scanf()` functions
- Comments and code organization
- Basic operators (arithmetic, relational, logical)
- Conditional statements (if/else)

**Best For:** Absolute beginners with no programming experience

---

### 2. Variables & Data Types (`02_variables_data_types/`)
**21 Exercises** | *Duration: 1 week*

Understand how to store and manage data in your programs. Learn about different data types and how to use them effectively.

**Topics Covered:**
- Variable declaration and initialization
- Data types: int, float, double, char
- `sizeof()` operator
- Type casting and conversion
- Variable scope

**Best For:** Understanding data storage and memory concepts

---

### 3. Loops (`03_loops/`)
**28 Exercises** | *Duration: 1-2 weeks*

Master iteration concepts to repeat code blocks efficiently. This is essential for working with arrays and processing data.

**Topics Covered:**
- `for` loops
- `while` loops
- `do-while` loops
- Loop control: `break` and `continue`
- Nested loops
- Loop patterns and techniques

**Best For:** Learning iteration and repetition patterns

---

### 4. Functions (`04_functions/`)
**25 Exercises** | *Duration: 1-2 weeks*

Learn to write reusable, organized code by mastering functions. Functions are building blocks of larger programs.

**Topics Covered:**
- Function definition and declaration
- Parameters and return types
- Scope and lifetime of variables
- Recursive functions
- Function libraries

**Best For:** Writing modular and maintainable code

---

### 5. Arrays (`05_arrays/`)
**40 Exercises** | *Duration: 2-3 weeks*

Work with collections of data using arrays. Learn both single and multi-dimensional arrays.

**Topics Covered:**
- 1D arrays: declaration and usage
- 2D arrays and matrices
- Array initialization
- Passing arrays to functions
- Array algorithms (sorting, searching, etc.)

**Best For:** Managing collections of data

---

### 6. Strings (`06_strings/`)
**30 Exercises** | *Duration: 2 weeks*

Master string handling—one of the most important skills in C programming!

**Topics Covered:**
- String basics (character arrays)
- String input/output (`gets()`, `puts()`, `fgets()`)
- String library functions (`strlen()`, `strcpy()`, `strcat()`, etc.)
- String manipulation and comparison
- Common string problems and solutions

**Best For:** Text processing and manipulation

---

### 7. Pointers (`07_pointers/`)
**60+ Exercises** | *Duration: 3-4 weeks*

Pointers are what make C powerful! This advanced topic opens doors to dynamic memory, complex data structures, and more.

**Topics Covered:**
- Pointer basics: address-of (`&`) and dereference (`*`) operators
- Pointer arithmetic
- Arrays and pointers relationship
- Pointers to functions
- Dynamic memory allocation (`malloc()`, `free()`)
- Strings as pointers
- Pointer pitfalls and debugging

**Best For:** Advanced programmers ready to unlock C's full potential

---

### 8. Structs & Unions (`08_structs_unions/`)
**45 Exercises** | *Duration: 2-3 weeks*

Learn to create custom data types and organize related data. Master structures and unions for building complex data models.

**Topics Covered:**
- Structure definition and declaration
- Accessing structure members
- Nested structures
- Arrays of structures
- Pointers to structures
- Unions and their differences from structs
- `typedef` for custom types
- Structure padding and memory alignment
- Practical applications: linked lists preparation

**Best For:** Building complex data types and preparing for advanced data structures

---

## How to Use This Repository

### For Absolute Beginners

1. **Start with Section 1:** Begin with `01_c_basics/` and work through exercises sequentially
2. **Follow the order:** Don't skip sections—each builds on previous concepts
3. **Practice consistently:** Spend 30-60 minutes daily on exercises
4. **Type it out:** Don't copy-paste; type every line to build muscle memory
5. **Experiment:** Modify exercises and create variations to deepen understanding

### For Experienced Programmers

- Jump to relevant sections based on your learning goals
- Use as a reference for C-specific patterns
- Challenge yourself with advanced exercises in each section
- Use as interview preparation

### Study Tips

* **Understand before moving on** — Don't memorize, understand the "why"  
* **Write clean code** — Use meaningful variable names and comments  
* **Test your code** — Try different inputs, including edge cases  
* **Debug systematically** — Use `printf()` to trace variable values  
* **Read error messages** — They're trying to help you!  
* **Revisit basics** — Go back and refactor old exercises with new knowledge  

---

## Compilation Best Practices

### Enable Compiler Warnings
```bash
gcc -Wall -Wextra -std=c99 program.c -o program
```

### Explanation of flags:
- `-Wall` — Enable all common warnings
- `-Wextra` — Enable extra warnings
- `-std=c99` — Use C99 standard (recommended for modern C)

### Debug Mode (for troubleshooting)
```bash
gcc -g -Wall -Wextra program.c -o program
```

---

## Common Issues & Solutions

### Issue: "gcc: command not found"
**Solution:** Install a C compiler (see Prerequisites section)

### Issue: "error: undefined reference to..."
**Solution:** Make sure you're compiling all `.c` files if there are multiple

### Issue: Program crashes or has unexpected output
**Solution:** 
- Add `printf()` statements to trace execution
- Check array bounds and pointer validity
- Use tools like `valgrind` to detect memory issues

---

## Contributing

We welcome contributions! If you have:
- New exercises or topics to add
- Improvements to existing exercises
- Bug fixes or clarifications
- Better explanations or examples

**Please follow these steps:**

1. Fork the repository
2. Create a feature branch: `git checkout -b feature/your-feature`
3. Make your changes
4. Commit: `git commit -m 'feat: Add new exercise on topic X'`
5. Push: `git push origin feature/your-feature`
6. Open a Pull Request

**Guidelines:**
- Write clear, commented C code
- Follow consistent naming conventions
- Include example input/output
- Test your exercises before submitting

---


## Acknowledgments

- Inspired by numerous online C programming tutorials and courses
- Thanks to the open-source community for excellent tools like GCC and Clang
- Special thanks to all contributors and learners

---

## Support & Contact

Have questions or found an issue?

- **Email:** Open an issue on GitHub
- **Bug Report:** [GitHub Issues](https://github.com/justshobee/ultimate-c-exercises/issues)
- **Suggestions:** Feel free to open a discussion or issue

---

## Progress Tracker

Keep track of your progress! Here's a template:

- [ ] 01_c_basics (all 48 exercises)
- [ ] 02_variables_data_types (all 21 exercises)
- [ ] 03_loops (all 28 exercises)
- [ ] 04_functions (all 25 exercises)
- [ ] 05_arrays (all 40 exercises)
- [ ] 06_strings (all 30 exercises)
- [ ] 07_pointers (all 60+ exercises)
- [ ] 08_structs_unions (all 45 exercises)

---

<div align="center">

**Star this repo if it helps you on your C programming journey!**

*Made with dedication for C learners worldwide*

By justshobee

</div>

