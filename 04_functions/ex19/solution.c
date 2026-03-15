/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/15 22:05:29 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/15 22:26:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int* create_int(int value)
{
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = value;

	return ptr;
}

int main()
{
	int *ptr;
	ptr = create_int(1337);
	if(ptr != NULL)
	{
		printf("Value created dynamically: %d\n",*ptr);
		free(ptr);
		ptr = NULL;
	}

	return 0;
}
