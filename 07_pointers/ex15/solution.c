/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/04 11:32:27 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/04 19:22:33 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr = NULL;
	
	ptr = (int *)malloc(sizeof(int));

	if(ptr == NULL)
	{
		printf("Error : Memory allocation failed!\n");
		exit(0);
	}
	
	*ptr = 1337;

	printf("Value stored dynamically: %d\n",*ptr);
	printf("Memory address allocated: %p\n",ptr);

	free(ptr);
	ptr = NULL;
	return 0;
}
