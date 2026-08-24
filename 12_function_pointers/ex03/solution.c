/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/24 20:51:26 by shobeedev // learn the why,              */
/*   Updated: 2026/08/24 20:59:43 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


void transform_array(int *arr, int size, int (*func)(int))
{
	int		i;

	i = 0;
	while (i < size)
	{
		arr[i] = func(arr[i]);
		i++;
	}
}

int		square(int a)
{
	return (a * a);
}

int		double_val(int a)
{
	return (a * 2);
}

void	print_arr(int *arr, int size)
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
			j++;
			i++;
		}
		transform_array(arr, size - 1, square);
		print_arr(arr, size - 1);
	}
	return (0);
}

