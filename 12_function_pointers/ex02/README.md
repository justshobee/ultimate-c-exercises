## 2. Array of Operations
 
* **Description:** Create an array of function pointers to `add`, `subtract`, `multiply`, and `divide`. Write a function that takes an index and two integers, and calls the corresponding function from the array.
* **Function Prototype:** `int compute(int index, int a, int b);`
* **Tests:**
  * `compute(0, 8, 2)` → `10` (add)
  * `compute(1, 8, 2)` → `6` (subtract)
  * `compute(2, 8, 2)` → `16` (multiply)
  * `compute(3, 8, 2)` → `4` (divide)
