/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 10:37:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 11:10:03 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int count;
	int *ptr_arr = NULL;
	printf("Enter the number of element (size of allocate) : ");
	scanf("%d",&count);

	int *ptr_back_up = ptr_arr = (int *)malloc(count * sizeof(int));

	if(ptr_back_up == NULL)
	{
		printf("Error : memory allocation failed!\n");
		exit(1);
	}

	printf("Enter %d integers : \n",count);
	
	int i = 0;
	while(i < count)
	{
		printf("Element %d : ",i+1);
		scanf("%d",&ptr_back_up[i]);//or (ptr_back_up + i) also corect
		i++;
	}

	printf("\nElement stored are : ");

	i = 0;
	while(i < count)
	{
		printf("%d ",*(ptr_back_up+i));
		i++;
	}

	free(ptr_arr);
	ptr_arr = NULL;

	return 0;
}
