# Exercise 12: Function Scope with Helper Function

## Description
Write a function calculate_net_salary(float gross) which internally calls a private helper function calculate_tax(float income) (declared and defined within the same file) to illustrate modularity. Assume a fixed tax rate of 15%.

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`

## Allowed Functions
- `printf`

## Examples
### Expected Output
```text
Inside main tax function
Inside Private helper function
Gross Salary: 50000.00
Tax Deducted: 7500.00
Net Salary Received: 42500.00
```