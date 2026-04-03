/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 11:50:56 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 11:54:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	int *ptr = arr;//or &arr or &arr[0] its the same.


	printf("Array elements using pointer arithmetic:\n");
	int i = 0;
	while(i < 5 )
	{
		//printf("Element %d : %d\n",i,*(ptr + i));
		printf("Element %d : %d\n",i,ptr[i]);
		i++;
	}

	return 0;
}
