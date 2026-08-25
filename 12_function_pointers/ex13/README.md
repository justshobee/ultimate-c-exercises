## 13. ft_count_if
 
* **Description:** Create a function `ft_count_if`, which returns the number of elements in the array for which the function `f` does **not** return `0`. Applied in the order of the array.
* **Allowed functions:** None
* **Function Prototype:** `int ft_count_if(char **tab, int length, int (*f)(char *));`
* **Tests:**
  * `ft_count_if({"foo","","bar",""}, 4, is_empty)` → `2`
  * `ft_count_if({"a","bb","ccc"}, 3, is_long_word)` → depends on `is_long_word`, e.g. `1` if only 3+ char words count
  * `ft_count_if({"1","2","x"}, 3, is_digit_string)` → `2`
  * `ft_count_if({}, 0, is_empty)` → `0`
