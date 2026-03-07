/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/07 17:41:07 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/07 17:44:57 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int findMax(int arr[],int size)
{
	int i = 1;
	int max = arr[0];
	while(i < size)
	{
		if(arr[i] > max)
			max = arr[i];
		i++;
	}
	return max;
}

int main()
{
	int arr[] = {8, 15, 2, 70, 9, 33};

	printf("The array elements are: {8, 15, 2, 70, 9, 33}\n");

	printf("The largest element found by the function is: %d\n",findMax(arr,6));

	return 0;
}
