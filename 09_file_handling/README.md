# C Programming: Low-Level File Manipulation (System Calls)

## Overview

This section covers system-level file operations in C, which provide direct control over file I/O through kernel interaction.

## System Calls vs. Standard I/O

### Standard I/O (High-Level)
- Uses functions like `fopen()`, `fread()`, `fwrite()`
- Employs **buffering**: data is temporarily stored before processing
- Makes operations faster by grouping small requests together
- Easier to use but less control

### System Calls (Low-Level)
- **Unbuffered**: direct kernel interaction
- When you call `write()`, the OS kernel immediately moves data
- Provides more control but requires manual management
- More responsibility on the programmer

## File Descriptors

Instead of `FILE *` pointers, low-level programming uses **File Descriptors (fd)**.

### What is a File Descriptor?
- A non-negative integer that acts as an index
- Maintained by the kernel to track open files
- Simple, lightweight way to reference files

### Standard Descriptors

Every process starts with three open descriptors:

| fd | Name | Purpose |
|---|---|---|
| 0 | `stdin` | Standard Input |
| 1 | `stdout` | Standard Output |
| 2 | `stderr` | Standard Error |

## The "Big Five" System Calls

### 1. `open()` — Getting Access

Opens a file and returns a file descriptor.

**Flags:**
- `O_RDONLY`: Read only
- `O_WRONLY`: Write only
- `O_CREAT`: Create the file if it doesn't exist

### 2. `read()` — Pulling Data

Reads a raw sequence of bytes from disk into a buffer in memory.

- You must specify exactly how many bytes to read
- Returns the number of bytes actually read

### 3. `write()` — Pushing Data

Sends bytes from your memory buffer to a file descriptor.

- Returns the number of bytes actually written
- Helps verify if the operation was successful

### 4. `lseek()` — Moving the Cursor

Moves the file pointer to a specific position for random access.

- Works directly with byte offsets at the kernel level
- Unlike high-level `fseek()`, offers more precise control
- Jump to beginning, end, or specific locations

### 5. `close()` — Releasing the Resource

Always close your descriptors when done.

**Warning:** Failing to close can cause descriptor leaks, eventually exhausting available IDs and preventing new files from opening.

## Error Handling with `errno`

### Return Values
- System calls typically return `-1` on error
- Return `0` or positive value on success

### Getting Error Information
- Check the global variable `errno`
- Use `perror()` to print human-readable error messages
- Common errors: "File not found", "Permission denied", etc.

---

## Table of Contents (26 Exercises)

| # | Exercise | Link |
|---|----------|------|
| 1 | Create and Write to a File | [ex01](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex01) |
| 2 | Read and Display File Content | [ex02](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex02) |
| 3 | Append Data to a File | [ex03](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex03) |
| 4 | Count Characters in a File | [ex04](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex04) |
| 5 | Count Lines in a File | [ex05](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex05) |
| 6 | Count Words in a File | [ex06](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex06) |
| 7 | Copy File | [ex07](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex07) |
| 8 | Display a Specific Line of a File | [ex08](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex08) |
| 9 | Write a Series of Numbers to a File | [ex09](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex09) |
| 10 | Read Numbers and Calculate Sum | [ex10](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex10) |
| 11 | Uppercase Conversion | [ex11](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex11) |
| 12 | Remove Vowels from a File | [ex12](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex12) |
| 13 | Search for a Word | [ex13](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex13) |
| 14 | Replace Word in a File | [ex14](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex14) |
| 15 | Display File Content in Reverse | [ex15](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex15) |
| 16 | Merge Two Files | [ex16](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex16) |
| 17 | Tab to Spaces Conversion | [ex17](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex17) |
| 18 | Simple Encryption (Caesar Cipher) | [ex18](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex18) |
| 19 | Simple Decryption (Caesar Cipher) | [ex19](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex19) |
| 20 | Write Student Record | [ex20](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex20) |
| 21 | Determine File Size | [ex21](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex21) |
| 22 | List Directory Contents | [ex22](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex22) |
| 23 | Delete a File | [ex23](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex23) |
| 24 | Rename a File | [ex24](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex24) |
| 25 | Check File Permissions | [ex25](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex25) |
| 26 | Binary File Read/Write | [ex26](https://github.com/justshobee/ultimate-c-exercises/tree/main/09_file_handling/ex26) |

---

*Ready to practice these concepts with exercises!*