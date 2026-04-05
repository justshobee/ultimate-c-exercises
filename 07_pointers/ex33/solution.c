/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 11:25:17 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 11:30:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[6] = {55, 12, 89, 4, 30, 77};
	int size = sizeof(arr) / sizeof(arr[0]);

	int *ptr = &arr[0];

	int max = *ptr;
	int min = *ptr;
	int i = 1;
	while(i < size)
	{
		if(max < *(ptr + i))
			max = ptr[i];
		if(min > ptr[i])
			min = *(ptr + i);
		i++;
	}

	printf("Maximum element in the array : %d\n",max);
	printf("Minumum element in the array : %d\n",min);

	return 0;
}
