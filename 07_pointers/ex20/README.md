# Exercise 20: Introduction to Double Pointers

## Description
Declare an integer variable (num), a pointer to the integer (ptr1), and a pointer to the pointer (double pointer, ptr2). Assign addresses correctly and print the final value of num using all three variables: num, *ptr1, and **ptr2.

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`

## Allowed Functions
- `printf`

## Examples
### Given
```c
int num = 77;
```

### Expected Output
```text
Original value (num): 77
Value via *ptr1: 77
Value via **ptr2: 77

Address of num: 0x7ffdcdfc6664
Value stored in ptr1: 0x7ffdcdfc6664
Address of ptr1: 0x7ffdcdfc6668
Value stored in ptr2: 0x7ffdcdfc6668
```