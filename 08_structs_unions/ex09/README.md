# Exercise 9: Self-Referential Structure (Basic Node)

## Description
Define a self-referential structure called Node. It should have an integer data member (data) and a pointer (next) that points to a structure of the same type (struct Node). Create two nodes, assign data to them, and link the first node to the second. Display the data from both nodes by starting only from the first node.

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`

## Allowed Functions
- `printf`

## Examples
### Given
```c
// 1. Self-Referential Structure Definition
struct Node {
    int data;
    struct Node *next; // Pointer to a structure of type Node
};
```

### Expected Output
```text
Node 1 Data: 100
Node 2 Data (via n1 pointer): 200
```