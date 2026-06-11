# Exercise 18: Using realloc

## Description
Allocate an initial array of 2 integers using malloc(), storing values 10 and 20.
    Use realloc() to increase the array size to 4 integers.
    Store values 30 and 40 in the two new slots.
    Print all 4 elements.

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`

## Allowed Functions
- `exit`
- `free`
- `malloc`
- `printf`
- `realloc`

## Examples
### Given
```c
int current_size = 2;
```

### Expected Output
```text
Initial size 2: 10, 20
New size 4: 10 20 30 40
```