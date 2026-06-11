# Exercise 19: Merging Structures (Data Consolidation)

## Description
Define two structures: Personal_Info (id, address) and Job_Info (id, title, salary). Create a third structure, Full_Record (id, address, title, salary). Write a function that takes instances of Personal_Info and Job_Info (ensuring their IDs match) and returns a consolidated Full_Record structure.

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`

## Allowed Functions
- `printf`
- `strcpy`

## Examples
### Given
```c
struct Personal_Info {
    int id;
    char address[100];
};

struct Job_Info {
    int id;
    char title[50];
    float salary;
};

// 1. Consolidated Structure
struct Full_Record {
    int id;
    char address[100];
    char title[50];
    float salary;
};
```

### Expected Output
```text
--- Consolidated Employee Record ---
ID: 105
Address: 123 Main St
Title: Software Engineer
Salary: $85000.00
```