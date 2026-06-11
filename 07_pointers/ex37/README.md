# Exercise 7: Insert Element In Array

## Description
Write a C program that takes an element and a desired position from the user and inserts that element into the specified position of an array, shifting existing elements as necessary.

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`

## Allowed Functions
- `printf`

## Examples
### Given
```c
#include <stdio.h>

int main() {
    int size = 5; // Initial size is 5, capacity for 6
    int arr[6] = {10, 20, 30, 40, 50}; 
    int element = 35;
    int position = 4; // Insert at Position 4 (index 3)
    
    return 0;
}
```

### Expected Output
```text
Array after inserting 35 at position 4 (index 3):
10 20 30 35 40 50
```