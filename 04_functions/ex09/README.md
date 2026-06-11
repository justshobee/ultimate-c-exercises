# Exercise 9: static Local Variable (Lifetime)

## Description
Write a function test_static_scope() that declares a count a static local variable (static int count = 1;). Increment it by 1 inside a function. Call the function twice to show that the variable’s value is retained across function calls.

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`

## Allowed Functions
- `printf`

## Examples
### Expected Output
```text
--- First Call ---
Static count retained value: 1
Static count after increment: 2

--- Second Call ---
Static count retained value: 2
Static count after increment: 3
```