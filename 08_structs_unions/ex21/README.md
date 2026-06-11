# Exercise 21: Complex Number Structure (Addition)

## Description
Define a structure ComplexNumber with members for the real and imaginary parts (both floats). Write a function add_complex that takes two ComplexNumber structures as input and returns a third ComplexNumber structure that is the sum of the two inputs. ((a+bi)+(c+di)=(a+c)+(b+d)i).

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`

## Allowed Functions
- `printf`

## Examples
### Given
```c
// 1. Structure Definition
struct ComplexNumber {
    float real;
    float imaginary;
};
```

### Expected Output
```text
C1 = 3.50 + 2.00i
C2 = 1.20 + 4.30i
Sum = 4.70 + 6.30i
```