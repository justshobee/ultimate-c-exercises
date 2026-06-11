# Exercise 17: Using calloc

## Description
Use calloc() to dynamically allocate memory for an array of 10 floating-point numbers. Print the first and last elements to verify that calloc automatically initializes all elements to zero. Then, free the memory.

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`

## Allowed Functions
- `calloc`
- `exit`
- `free`
- `printf`

## Examples
### Given
```c
int count = 10;
```

### Expected Output
```text
Verifying calloc initialization (should be 0.00):
First element (float_arr[0]): 0.00
Last element (*(float_arr + 9)): 0.00
Element at index 5 after assignment: 3.14
```