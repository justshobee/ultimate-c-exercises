## 11. ft_map
 
* **Description:** Create the function `ft_map`, which applies a given function to all elements of an integer array (in order) and returns a **new** array containing all the return values.
* **Allowed functions:** `malloc`
* **Function Prototype:** `int *ft_map(int *tab, int length, int (*f)(int));`
* **Tests:**
  * `ft_map({1,2,3,4}, 4, square)` → `{1,4,9,16}` (new array, original untouched)
  * `ft_map({1,2,3}, 3, double_val)` → `{2,4,6}`
  * `ft_map({-2,-1,0}, 3, square)` → `{4,1,0}`
  * `ft_map({}, 0, square)` → returns a valid pointer (may be freed safely) or `NULL`, length 0
