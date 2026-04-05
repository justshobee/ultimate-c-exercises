/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 18:13:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 18:45:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int size = 9;
	int arr[9] = {15, -5, 20, 0, -10, 30, -25, 5, 0};

	int *ptr = arr;

	int i = 0;
	printf("Array element : ");
	while(i < size)
	{
		printf("%d ",*(ptr+i));
		i++;
	}
	printf("\n");

	int sum_p = 0,sum_n = 0;
	i =0;
	while(i < size)
	{
		if(*ptr > 0)
			sum_p += *ptr;
		if(*ptr < 0)
			sum_n += *ptr;
		ptr++;
		i++;
	}

	printf("sum of all positive numbers : %d\n",sum_p);
	printf("sum of all negative numbers : %d\n",sum_n);

	return 0;
}
