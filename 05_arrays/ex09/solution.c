/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/19 21:25:48 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/19 22:28:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int size = 7;
	int arr[7] = {10, 50, 20, 80, 40, 90, 30};

	printf("Array elements: ");
	int i = 0;
	while(i < size)
	{
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");

	int max1 = -2147483648;
	int max2 = -2147483648;

	int min1 = 2147483647;
	int min2 = 2147483647;

	i = 0;
	while(i < size)
	{
		if(arr[i] > max1)
		{
			max2 = max1;
			max1 = arr[i];
		}else if(arr[i] > max2 && arr[i] != max1)
			max2 = arr[i];


		if(arr[i] < min1)
		{
			min2 = min1;
			min1 = arr[i];
		}else if(arr[i] < min2 && arr[i] != min1)
			min2 = arr[i];

		i++;

	}


	printf("Second Largest (Max): %d\n",max2);
	printf("Second Smallest (Min): %d\n",min2);

	return 0;
}

/*
Initialization: max1 and max2 are initialized to INT_MIN (the smallest possible integer)
to ensure any array element will be larger. Conversely, min1 and min2 are initialized
to INT_MAX (the largest possible integer).

Max Logic:

    If arr[i] is greater than max1, it means we found a new largest element.
		We promote the old max1 to max2, and set arr[i] as the new max1.
    If arr[i] is not the largest (max1), but it is greater than max2
		and not equal to max1 (handling duplicates), then it is the new second largest (max2).

Min Logic: The logic for min1 and min2 follows the same structure but with
reversed comparison operators (<). This single-pass method is more efficient than sorting the entire array first.

*/
