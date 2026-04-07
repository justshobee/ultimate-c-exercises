/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/07 12:13:32 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/07 12:59:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void print_arr(int *ptr,int size)
{
	int i = 0;
	while(i < size)
		printf("%d ",ptr[i++]);
	printf("\n");
}
int main()
{
	int arr[] = {4, 2, 4, 1, 5, 2, 3, 1};
	int size = 8;

	int *ptr = arr;
	printf("Original array: ");
	print_arr(arr,size);
	int i = 1,j = 0,index = 1,k = 1;
	bool ishere;
	while(i < size)
	{
		index = i;
		ishere = false;
		j = 0;
		while(j < index)
		{
			if(ptr[i] == ptr[j])
				ishere = true;
			j++;
		}
		if(ishere == false)
			ptr[k++] = ptr[i];
		i++;
	}
	printf("Array after removing duplicates (new size %d): ",k);
	print_arr(ptr,k);
}
