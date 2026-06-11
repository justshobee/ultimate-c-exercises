# Exercise 21: Function with Double Pointer

## Description
Write a function allocate_memory that dynamically allocates memory for a single integer and stores the value 99 in it. The function must take a double pointer (int **) as an argument to ensure the pointer variable in the main function is updated with the address of the newly allocated memory.

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`
- `solution_v2.c`

## Allowed Functions
- `free`
- `malloc`
- `printf`

## Examples
### Expected Output
```text
data_ptr address before call: (nil)
data_ptr address after call: 0x59d19bd8f6b0
Value accessed via data_ptr: 99
```