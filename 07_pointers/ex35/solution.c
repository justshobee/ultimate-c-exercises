/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 11:41:09 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 11:50:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void print_arr(int *ptr,int size)
{
	int i = 0;
	while(i < size)
	{
		printf("%d ",*(ptr + i));
		i++;
	}
	printf("\n");
}
int main()
{
	int arr[7] = {10, 20, 30, 40, 50, 60, 70};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("Original Array : ");
	print_arr(arr,size);

	int i = 0;

	int *start = &arr[0];
	int *end = &arr[size-1];

	while(start < end)
	{
		int tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}

	printf("Reversed Array : ");
	print_arr(arr,size);
	
	return 0;
}
