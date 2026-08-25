## 7. Passing Function Pointers to Filter an Array
 
* **Description:** Write a function that takes an array of integers and a predicate function pointer (returns `1` if condition met, `0` otherwise), and returns a new array containing only the elements that satisfy the predicate. Also return the count via an output parameter.
* **Function Prototype:** `int* filter_array(int *arr, int size, int (*predicate)(int), int *out_count);`
* **Tests:**
  * `filter_array({1,2,3,4,5,6}, 6, is_even, &count)` → `{2,4,6}`, `count == 3`
  * `filter_array({1,2,3,4,5,6}, 6, is_odd, &count)` → `{1,3,5}`, `count == 3`
  * `filter_array({-3,-1,0,2,5}, 5, is_positive, &count)` → `{2,5}`, `count == 2`
  * `filter_array({1,1,1}, 3, is_even, &count)` → `{}`, `count == 0`
