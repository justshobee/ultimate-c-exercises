## 10. ft_list_foreach_if
 
* **Description:** Create the function `ft_list_foreach_if`, which applies the function given as an argument to some of the list's elements — only when `cmp` applied to an element's data and `data_ref` returns `0`. `f` should be applied in the same order as the list.
* **Directory:** `ex10/`
* **Files to submit:** `ft_list_foreach_if.c`, `ft_list.h`
* **Authorized:** None
* **Function Prototype:** `void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(void *, void *));`
* **Usage note:** `f` and `cmp` are used as `(*f)(list_ptr->data);` and `(*cmp)(list_ptr->data, data_ref);`. `cmp` could, for example, be `ft_strcmp`.
