## 1. Basic Function Pointer Call
 
* **Description:** Write a function that takes a pointer to a function (which takes two `int`s and returns an `int`) and calls it with two given integers, returning the result.
* **Function Prototype:** `int apply_operation(int (*op)(int, int), int a, int b);`
* **Tests:**
  * `apply_operation(add, 3, 4)` → `7` (where `add` returns `a + b`)
  * `apply_operation(subtract, 10, 3)` → `7` (where `subtract` returns `a - b`)
  * `apply_operation(multiply, 5, 6)` → `30`
  * `apply_operation(add, -2, 2)` → `0`
