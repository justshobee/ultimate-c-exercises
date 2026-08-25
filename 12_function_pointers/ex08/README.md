## 8. Function Pointer Returning a Function Pointer
 
* **Description:** Write a function that takes a character representing an operator (`'+'`, `'-'`, `'*'`, `'/'`) and returns the matching function pointer (of type `int (*)(int, int)`), or `NULL` if the operator is unrecognized.
* **Function Prototype:** `int (*get_operation(char op))(int, int);`
* **Tests:**
  * `get_operation('+')` → returns pointer to `add`; calling it with `(2,3)` → `5`
  * `get_operation('*')` → returns pointer to `multiply`; calling it with `(4,5)` → `20`
  * `get_operation('/')` → returns pointer to `divide`; calling it with `(10,2)` → `5`
  * `get_operation('%')` → returns `NULL`
