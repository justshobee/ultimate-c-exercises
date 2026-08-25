## 6. Menu-Driven Dispatch Table
 
* **Description:** Simulate a simple menu system using an array of function pointers (each taking `void` and returning `void`), where a given menu choice number calls the corresponding function (e.g., `print_hello`, `print_goodbye`, `print_help`).
* **Function Prototype:** `void run_menu_option(int choice);`
* **Tests:**
  * `run_menu_option(1)` → prints `"Hello!"`
  * `run_menu_option(2)` → prints `"Goodbye!"`
  * `run_menu_option(3)` → prints `"Help menu..."`
  * `run_menu_option(99)` → prints `"Invalid option"`
