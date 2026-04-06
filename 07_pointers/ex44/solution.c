/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/06 09:26:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/06 09:32:28 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[] = {5, 2, 8, 5, 1, 2, 9, 8, 4};
	int size = sizeof(arr) / sizeof(arr[0]);

	int *ptr = arr;
	
	printf("Arrays : ");
	int i = 0;
	while(i < size)
	{
		printf("%d ",*(ptr + i));
		i++;
	}
	printf("\n");

	printf("Unique element are : ");
	int count = 0;
	i = 0;
	while(i < size)
	{
		int j = 0;
		count = 0;
		while(j < size)
		{
			if(*(ptr + i) == *(ptr + j))
				count++;
			j++;
		}
		if(count == 1)
			printf("%d ",ptr[i]);
		i++;
	}

	return 0;
}
