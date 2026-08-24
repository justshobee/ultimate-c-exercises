## 3. Simple Callback on Array Elements
 
* **Description:** Write a function that applies a given function pointer to every element of an integer array, modifying the array in place (e.g., doubling each value or squaring it, depending on which function is passed).
* **Function Prototype:** `void transform_array(int *arr, int size, int (*func)(int));`
* **Tests:**
  * `transform_array({1,2,3,4}, 4, square)` → `{1,4,9,16}`
  * `transform_array({1,2,3,4}, 4, double_val)` → `{2,4,6,8}`
  * `transform_array({-1,-2,-3}, 3, square)` → `{1,4,9}`
  * `transform_array({0,0,0}, 3, double_val)` → `{0,0,0}`
