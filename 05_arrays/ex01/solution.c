/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/19 10:35:36 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/19 10:45:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int size;
	printf("Enter the number of elements (size of array): ");
	scanf("%d",&size);

	int arr[size];

	int i = 0;
	printf("Enter %d element :\n",size);
	while(i < size)
	{
		printf("Element [%d] : ",i+1);
		scanf("%d",&arr[i]);
		i++;
	}

	int j = 0;
	printf("\nElements stored in the array are: ");
	while(j < size)
	{
		printf("%d ",arr[j]);
		j++;
	}

	return 0;
}
