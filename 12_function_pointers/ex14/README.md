
## 14. ft_is_sort
 
* **Description:** Create a function `ft_is_sort`, which returns `1` if the array is sorted and `0` if it is not. The function `f` provided as an argument returns a negative integer if the first argument is less than the second, `0` if they are equal, or a positive integer if the first argument is greater than the second.
* **Allowed functions:** None
* **Function Prototype:** `int ft_is_sort(int *tab, int length, int (*f)(int, int));`
* **Tests:**
  * `ft_is_sort({1,2,3,4}, 4, ascending_cmp)` → `1`
  * `ft_is_sort({4,3,2,1}, 4, ascending_cmp)` → `0`
  * `ft_is_sort({4,3,2,1}, 4, descending_cmp)` → `1`
  * `ft_is_sort({1}, 1, ascending_cmp)` → `1`
