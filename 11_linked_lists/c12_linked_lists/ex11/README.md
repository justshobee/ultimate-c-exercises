## 11. ft_list_find
 
* **Description:** Create the function `ft_list_find`, which returns the address of the first element whose data, compared to `data_ref` with `cmp`, causes `cmp` to return `0`.
* **Directory:** `ex11/`
* **Files to submit:** `ft_list_find.c`, `ft_list.h`
* **Authorized:** None
* **Function Prototype:** `t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());`
* **Usage note:** `cmp` is used as `(*cmp)(list_ptr->data, data_ref);`.
