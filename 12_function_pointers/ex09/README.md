## 9. Typedef'd Function Pointers with a Generic Reduce
 
* **Description:** Using a `typedef` for a function pointer type (e.g., `typedef int (*BinOp)(int, int);`), implement a "reduce" function that folds an array down to a single value using a given binary operation and an initial accumulator value.
* **Function Prototype:** `int reduce_array(int *arr, int size, BinOp op, int initial);`
* **Tests:**
  * `reduce_array({1,2,3,4}, 4, add, 0)` → `10`
  * `reduce_array({1,2,3,4}, 4, multiply, 1)` → `24`
  * `reduce_array({5,3,8,1}, 4, max_func, INT_MIN)` → `8`
  * `reduce_array({}, 0, add, 100)` → `100`
