/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/24 21:01:04 by shobeedev // learn the why,              */
/*   Updated: 2026/08/24 21:13:15 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ascending(int a, int b)
{
	return (a - b);
}

int		descending(int a, int b)
{
	return (b - a);
}

void bubble_sort(int *arr, int size, int (*cmp)(int, int))
{
	int		tmp;
	int		swpped;
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		swpped = 0;
		while (j < size - 1)
		{
			if (cmp(arr[j], arr[j + 1]) > 0)
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				swpped = 1;
			}
			j++;
		}
		if (!swpped)
			break ;
		i++;
	}
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
			i++;
			j++;
		}
		bubble_sort(arr, size - 1, descending);
		print_arr(arr, size - 1);
	}
	return (0);
}
