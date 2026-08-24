## 4. Custom Comparator for Sorting
 
* **Description:** Implement a simple bubble sort that takes a comparator function pointer to decide the sort order (ascending or descending), similar in spirit to `qsort`.
* **Function Prototype:** `void bubble_sort(int *arr, int size, int (*cmp)(int, int));`
* **Tests:**
  * `bubble_sort({5,2,9,1}, 4, ascending)` → `{1,2,5,9}`
  * `bubble_sort({5,2,9,1}, 4, descending)` → `{9,5,2,1}`
  * `bubble_sort({3,3,3}, 3, ascending)` → `{3,3,3}`
  * `bubble_sort({1}, 1, descending)` → `{1}
