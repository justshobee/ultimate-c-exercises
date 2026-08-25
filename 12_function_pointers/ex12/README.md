## 12. ft_any
 
* **Description:** Create a function `ft_any`, which returns `1` if, when passed to the function `f`, at least one element of the array returns a value other than `0`. Otherwise, it returns `0`. Applied in the order of the array. The array is delimited by a null pointer (`NULL`-terminated array of strings).
* **Allowed functions:** None
* **Function Prototype:** `int ft_any(char **tab, int (*f)(char *));`
* **Tests:**
  * `ft_any({"foo", "bar", NULL}, is_empty)` → `0` (none are empty)
  * `ft_any({"foo", "", "bar", NULL}, is_empty)` → `1` (one empty string found)
  * `ft_any({NULL}, is_empty)` → `0` (empty tab, nothing satisfies `f`)
  * `ft_any({"42", "1337", NULL}, is_digit_string)` → `1`
