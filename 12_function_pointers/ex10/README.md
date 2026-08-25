## 10. ft_foreach
 
* **Description:** Create the function `ft_foreach`, which applies a given function to all elements of an integer array. The function must be applied in the order of the array. Example usage: `ft_foreach(tab, 1337, &ft_putnbr);` to display all the integers in an array.
* **Allowed functions:** None
* **Function Prototype:** `void ft_foreach(int *tab, int length, void (*f)(int));`
* **Tests:**
  * `ft_foreach({1,2,3,4}, 4, ft_putnbr)` → prints `1`, `2`, `3`, `4` in order
  * `ft_foreach({-5,0,5}, 3, ft_putnbr)` → prints `-5`, `0`, `5` in order
  * `ft_foreach({}, 0, ft_putnbr)` → prints nothing
  * `ft_foreach({7}, 1, ft_putnbr)` → prints `7`
