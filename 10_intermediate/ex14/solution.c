/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/13 12:04:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/13 12:18:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Array copy
* 
* Description: Demonstration of creating a copy of an array on the heap using C.
*/

#include <stdio.h>
#include <stdlib.h>

int		*arr_cpy(int *src, int size)
{
	int		*arr;
	int		i;

	arr = NULL;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = src[i];
		i++;
	}
	return (arr);
}

void	print_arr(int arr[], int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

int		main(void)
{
	int		*a1_ptr;
	int		*a2_ptr;
	int a1[] = {1,2,3,4,5};
	int a2[] = {99,50,30,70,80,90,100,50};

	a1_ptr = arr_cpy(a1, (sizeof(a1) / sizeof(a1[0])));
	a2_ptr = arr_cpy(a2, (sizeof(a2) / sizeof(a2[0])));

	print_arr(a1_ptr, (sizeof(a1) / sizeof(a1[0])));
	print_arr(a2_ptr, (sizeof(a2) / sizeof(a2[0])));

	free(a1_ptr);
	free(a2_ptr);
	a1_ptr = NULL;
	a2_ptr = NULL;
	return (0);
}
