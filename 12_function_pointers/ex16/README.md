## 06. ft_sort_string_tab
 
* **Description:** Create the function `ft_sort_string_tab`, which sorts the strings in `tab` in ASCII order. `tab` is null-terminated. Sorting is performed by exchanging the array's pointers (not by copying string contents).
* **Allowed functions:** None
* **Function Prototype:** `void ft_sort_string_tab(char **tab);`
* **Tests:**
  * `ft_sort_string_tab({"banana","apple","cherry",NULL})` → `{"apple","banana","cherry",NULL}`
  * `ft_sort_string_tab({"c","a","b",NULL})` → `{"a","b","c",NULL}`
  * `ft_sort_string_tab({"same","same",NULL})` → `{"same","same",NULL}`
  * `ft_sort_string_tab({NULL})` → `{NULL}` (already "sorted", nothing to do)
