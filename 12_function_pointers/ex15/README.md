## 05. do-op
 
* **Description:** Create a program called `do-op`, executed as `do-op value1 operator value2`. It must use an array of pointers to functions to handle the operator. Values are treated as integers. Invalid operator → print `0`. Invalid number of arguments → print nothing. Division/modulo by zero print specific messages.
* **Allowed functions:** `write`
* **Supported operators:** `+`, `-`, `/`, `*`, `%`
* **Tests:**
  * `./do-op 42 "+" 21` → `63`
  * `./do-op 1 p 1` → `0` (invalid operator)
  * `./do-op` → *(nothing printed — invalid argument count)*
  * `./do-op 25 / 0` → `Stop : division by zero`
  * `./do-op 25 % 0` → `Stop : modulo by zero`
  * `./do-op 42amis - --+-20toto12` → `62` (leading integer of each arg is parsed, e.g. via `atoi`-like behavior)
