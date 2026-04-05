/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 11:12:24 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 11:24:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	int size = sizeof(arr) / sizeof(arr[0]);

	int *ptr = arr;//or arr[0] or &arr[0]

	int sum = 0;
	float avg = 0;;
	int i = 0;
	while(i < size)
	{
		sum += *(ptr + i);
		i++;
	}

	avg = sum / size;

	printf("Sum of array elements: %d\n",sum);
	printf("Average of array element : %.2f\n",avg);

	return 0;
}
