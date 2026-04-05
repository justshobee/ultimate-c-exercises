/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/05 11:31:23 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/05 11:39:21 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[8] = {1, 4, 7, 12, 15, 20, 3, 10};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int *ptr = arr;

	int i = 0;
	int even = 0,odd = 0;
	printf("Array : ");
	while(i < size)
	{
		printf("%d ",*ptr);
		if(*ptr % 2 == 0)
			even++;
		if(*ptr % 2 != 0)
			odd++;
		ptr++;//here we are increment the address
		i++;
	}
	
	printf("\nTotal even element : %d\n",even);
	printf("Total odd element : %d\n",odd);

	//so now will se the last increment of adress what is it!
	printf("value :  %d \n",*ptr);
	
	return 0;
}
