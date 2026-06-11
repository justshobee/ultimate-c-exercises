# Exercise 20: Write Student Record

## Description
Define a C struct Student containing name (string), roll_number (int), and marks (float). Write a single student’s record received from the user to file named students.txt.

## Assignment File
- `solution.c`

## Expected Files
- `data.txt`
- `solution.c`

## Allowed Functions
- None (Only standard operators/keywords)

## Examples
### Given
```c
// Student structure
struct Student {
    char name[50];
    int roll_number;
    float marks;
};
```

### Expected Output
```text
Enter Student Name: Jessa
Enter Roll Number: 25
Enter Marks: 85
Student record successfully written to students.
```