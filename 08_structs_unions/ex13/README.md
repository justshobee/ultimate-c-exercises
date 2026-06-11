# Exercise 13: Union with Struct Member (Conceptual)

## Description
Define a structure Asset with an integer id and a character array type (‘C’ for Car, ‘P’ for Property). Define a union Details that holds specific information: char car_license[10] or int property_id. Create an Asset variable that includes the Details union as a member. Input and display data for an asset, showing only the relevant union member based on the asset type.

## Assignment File
- `solution.c`

## Expected Files
- `solution.c`

## Allowed Functions
- `printf`
- `scanf`

## Examples
### Given
```c
// 1. Define the Union
union Details {
    char car_license[10];
    int property_id;
};

// 2. Define the Structure containing the Union
struct Asset {
    int id;
    char type; // 'C' or 'P'
    union Details info;
};
```

### Expected Output
```text
Enter Asset ID: 10
Enter Asset Type (C/P): C
Enter Car License Plate: NY123

--- Asset Report ---
Asset ID: 10
Type: Car, License: NY123
```