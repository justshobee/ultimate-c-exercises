## 5. Function Pointer as a Struct Field
 
* **Description:** Define a `struct Calculator` containing an `int` result field and a function pointer field for an operation. Write a function that uses the struct's function pointer to update its result field.
* **Function Prototype:** `void calculator_execute(struct Calculator *calc, int a, int b);`
* **Tests:**
  * `calc.op = add; calculator_execute(&calc, 4, 5)` → `calc.result == 9`
  * `calc.op = multiply; calculator_execute(&calc, 3, 3)` → `calc.result == 9`
  * `calc.op = subtract; calculator_execute(&calc, 10, 4)` → `calc.result == 6`
  * `calc.op = divide; calculator_execute(&calc, 20, 5)` → `calc.result == 4`
