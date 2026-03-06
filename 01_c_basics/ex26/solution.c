/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 17:54:33 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 17:59:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[5];

	printf("Enter a 5 intgers : \n");
	int i = 0;
	while(i < 5)
	{
		printf("Enter element %d : ",i + 1);
		scanf("%d",&arr[i]);
		i++;
	}

	printf("\nElements stored in the array: ");
	int j = 0;
	while(j < 5)

	{
		printf("%d ",arr[j]);
		j++;
	}

	return 0;
}
