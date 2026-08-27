## 12. ft_list_remove_if
 
* **Description:** Create the function `ft_list_remove_if`, which removes from the list all elements whose data, compared to `data_ref` using `cmp`, causes `cmp` to return `0`. The data of a removed element must be freed with `free_fct`.
* **Directory:** `ex12/`
* **Files to submit:** `ft_list_remove_if.c`, `ft_list.h`
* **Authorized:** `free`
* **Function Prototype:** `void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));`
* **Usage note:** `cmp` and `free_fct` are used as `(*cmp)(list_ptr->data, data_ref);` and `(*free_fct)(list_ptr->data);`.
