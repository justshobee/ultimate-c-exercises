/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/06 15:11:51 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/06 15:36:52 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void insertion_sort(int *ptr,int size)
{
	int i = 1;
	int j = 0;
	int current;
	while(i < size)
	{
		current = ptr[i];
		j = i - 1;
		while(j >= 0 && ptr[j] > current)
		{
			ptr[j+1] = ptr[j];
			j = j -1;
		}
		ptr[j+1] = current;
		i++;
	}
}
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    insertion_sort(arr, size);

    printf("Array sorted using Insertion Sort: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
