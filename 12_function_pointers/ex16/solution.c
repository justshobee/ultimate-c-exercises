/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/26 10:29:17 by shobeedev // learn the why,              */
/*   Updated: 2026/08/26 10:42:48 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void ft_sort_string_tab(char **tab)
{
	char*	tmp;
	int		swp;
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		swp = 0;
		while (tab[j + 1])
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
				swp = 1;
			}
			j++;
		}
		if (!swp)
			break ;
		i++;
	}
}

int		main(int size, char **str)
{
	if (size > 1)
	{
		int		i;

		ft_sort_string_tab(str + 1);
		i = 1;
		while (i < size)
		{
			printf("%s\n", str[i]);
			i++;
		}
	}
	return (0);
}
