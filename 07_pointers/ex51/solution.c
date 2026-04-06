/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/06 17:37:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/06 18:50:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr1[] = {10, 30, 50, 70};
	int size1 = 4;
	int arr2[] = {20, 40, 60, 80, 90};
	int size2 = 5;	
	int size = size1 + size2;
	int arr[size];
	
	int i = 0,a1 = 0,a2 = 0;
	while(a1 < size1 && a2 < size2)
	{
		if(arr1[a1] < arr2[a2])
			arr[i] = arr1[a1++];
		else
			arr[i] = arr2[a2++];
		i++;
	}

	while(a1 < size1)
		arr[i++] = arr1[a1++];

	while(a2 < size2)
		arr[i++] = arr2[a2++];

	printf("Merged sorted array : ");
	i = 0;
	while(i < size)
		printf("%d ",arr[i++]);

	return 0;
}
