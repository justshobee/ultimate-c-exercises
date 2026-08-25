/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/25 10:47:43 by shobeedev // learn the why,              */
/*   Updated: 2026/08/25 11:16:33 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_even(int n)
{
	return (n % 2 == 0);
}

int		is_odd(int n)
{
	return (n % 2 != 0);
}

int		is_positive(int n)
{
	return (n > 0);
}

int* filter_array(int *arr, int size, int (*predicate)(int), int *out_count)
{
	int		*tab;
	int		nSize;
	int		i;
	int		j;

	tab = NULL;
	nSize = 0;
	i = 0;
	while (i < size)
	{
		if (predicate(arr[i]))
			nSize++;
		i++;
	}
	tab = malloc(sizeof(int) * nSize);
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		if (predicate(arr[i]))
		{
			tab[j] = arr[i];
			j++;
		}
		i++;
	}
	*out_count = nSize;
	return (tab);
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
		int		*tab;
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
		printf("Original Array : \n");
		print_arr(arr, size - 1);
		j = 0;
		tab = filter_array(arr, size - 1, is_even, &j);
		printf("\nEven Array : \n");
		print_arr(tab, j);
		free(tab);
		tab = NULL;
		j = 0;
		tab = filter_array(arr, size - 1, is_odd, &j);
		printf("\nOdd Array : \n");
		print_arr(tab, j);
		free(tab);
		tab = NULL;
		j = 0;
		tab = filter_array(arr, size - 1, is_positive, &j);
		printf("\nPositive Array : \n");
		print_arr(tab, j);
		free(tab);
		tab = NULL;
	}
}
