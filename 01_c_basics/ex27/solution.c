/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/07 17:03:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/07 17:07:11 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[5] = {15,7,8,12,26};

	int i = 0;
	while(i < 5)
	{
		printf("%d ",arr[i]);
		i++;
	}

	int sum = 0;
	int j = 0;
	while(j < 5)
	{
		sum += arr[j];
		j++;
	}

	printf("\nThe sum of all array elements is: %d",sum);

	return 0;
}
