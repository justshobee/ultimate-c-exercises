/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/25 12:28:01 by shobeedev // learn the why,              */
/*   Updated: 2026/08/25 12:37:55 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef int (*BinOp)(int, int);

int		add(int a, int b)
{
	return (a + b);
}

int		multiply(int a, int b)
{
	return (a * b);
}

int reduce_array(int *arr, int size, BinOp op, int initial)
{
	int		i;

	i = 0;
	while (i < size)
	{
		initial = op(initial, arr[i]);
		i++;
	}
	return (initial);
}


int		main(int size, char **str)
{
	if (size > 1)
	{
		int		arr[size - 1];
		int		i;
		int		j;

		i = 0;
		j = 1;
		while (j < size)
		{
			arr[i] = atoi(str[j]);
			i++;
			j++;
		}
		printf("%d\n", reduce_array(arr, size - 1, add, 0));
		printf("%d\n", reduce_array(arr, size - 1, multiply, 1));
		printf("%d\n", reduce_array(arr, 0, add, 100));
	}
}
