/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/19 11:50:37 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/19 14:47:04 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main() {
    int size = 5; // Initial size is 5, capacity for 6
    int arr[6] = {10, 20, 30, 40, 50};
    int element = 35;
    int position = 4; // Insert at Position 4 (index 3)


	int index = position - 1;
	int i = size;
	while(i > index)
	{
		arr[i] = arr[i-1];
		i--;
	}
	arr[i] = element;
	size++;
	printf("Array after inserting 35 at position 4 (index 3):\n");
	i = 0;
	while(i < size)
	{
		printf("%d ",arr[i]);
		i++;
	}
    return 0;
}


/*
Array insertion requires two main steps:

    Shifting (The Critical Step): The loop for (i = size; i > index; i--) starts from
	the new logical end of the array (size) and moves backward until it reaches
	the insertion point (index). Inside, arr[i] = arr[i - 1]; copies the element at
	the preceding index (i-1) to the current index (i). This creates a duplicate of
	the element at index, effectively making space.

    Insertion: Once space is made, the new element is placed at arr[index] = element;.

    Size Update: Finally, the logical size of the array (size) is incremented to reflect
	the new element count. (Note: Arrays in C have a fixed physical size; this
	process is only possible if the array was declared with extra capacity).

*/
