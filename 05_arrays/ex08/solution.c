/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/19 14:48:01 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/19 15:17:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int size = 6;
	int arr[6] = {10, 20, 30, 40, 50, 60};
	int position = 3; // Remove Position 3 (i.e., index 2)

	printf("Initial array (size 6): ");
	int i = 0;
	while(i < size)
	{
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");

	i = position - 1;
	while(i < size) // this make last ele in arr 0, i < size-1 make last is  60
	{
		arr[i] = arr[i+1];
		i++;
	}
	size--;

	printf("Array after deleting element at position 3 (index 2): \n");
	i = 0;
	while(i < size)
	{
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");



}
