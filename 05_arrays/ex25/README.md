# Exercise 25: Two arrays are equal or not

## Description
Write a C program that compares two arrays of integers, A and B, and determines if they are exactly equal (same size and all elements at corresponding indices are identical).

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`

## Allowed Functions
- `printf`

## Examples
### Given
```c
int arr_a[] = {10, 20, 30, 40};
int arr_b[] = {10, 20, 30, 40}; // Equal to A
int arr_c[] = {10, 20, 30, 41}; // Mismatch in last element
int arr_d[] = {10, 20, 30};     // Different size
```

### Expected Output
```text
A and B are equal: True
A and C are equal: False
A and D are equal: False
```