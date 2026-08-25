/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/25 16:24:30 by shobeedev // learn the why,              */
/*   Updated: 2026/08/25 16:30:50 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		square(int n)
{
	return (n * n);
}

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*arr;
	int		i;

	arr = NULL;
	i = 0;
	if (length == 0)
		return (arr);
	arr = malloc(sizeof(int) * length);
	if (!arr)
		return (arr);
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
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
		tab = ft_map(arr, size - 1, square);
		i = 0;
		while (i < size - 1)
		{
			printf("%d ", tab[i]);
			i++;
		}
		free(tab);
		tab = NULL;
	}
	return (0);
}
