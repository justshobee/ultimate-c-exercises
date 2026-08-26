## 07. ft_advanced_sort_string_tab
 
* **Description:** Create the function `ft_advanced_sort_string_tab`, which sorts `tab` depending on the return value of the comparison function `cmp` provided as an argument. Sorting is performed by exchanging the array's pointers. `tab` is null-terminated. Calling it with `ft_strcmp` as the second argument produces the same result as `ft_sort_string_tab`.
* **Allowed functions:** None
* **Function Prototype:** `void ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));`
* **Tests:**
  * `ft_advanced_sort_string_tab({"banana","apple","cherry",NULL}, ft_strcmp)` → `{"apple","banana","cherry",NULL}`
  * `ft_advanced_sort_string_tab({"banana","apple","cherry",NULL}, ft_strcmp_reverse)` → `{"cherry","banana","apple",NULL}`
  * `ft_advanced_sort_string_tab({"bb","a","ccc",NULL}, cmp_by_length)` → `{"a","bb","ccc",NULL}`
  * `ft_advanced_sort_string_tab({NULL}, ft_strcmp)` → `{NULL}`
