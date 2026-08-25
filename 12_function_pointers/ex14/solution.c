/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/25 21:07:02 by shobeedev // learn the why,              */
/*   Updated: 2026/08/25 21:21:11 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ascending_cmp(int a, int b)
{
	return (a - b);
}

int		descending_cmp(int a, int b)
{
	return (b - a);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
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
		printf("%d\n", ft_is_sort(arr, size - 1, descending_cmp));
	}
	return (0);
}
