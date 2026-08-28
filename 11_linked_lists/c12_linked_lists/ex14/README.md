## 14. ft_list_sort
 
* **Description:** Create the function `ft_list_sort`, which sorts the list's elements in ascending order by comparing two elements' data using a comparison function.
* **Directory:** `ex14/`
* **Files to submit:** `ft_list_sort.c`, `ft_list.h`
* **Authorized:** None
* **Function Prototype:** `void ft_list_sort(t_list **begin_list, int (*cmp)());`
* **Usage note:** `cmp` is used as `(*cmp)(list_ptr->data, list_other_ptr->data);`. `cmp` could, for example, be `ft_strcmp`.
