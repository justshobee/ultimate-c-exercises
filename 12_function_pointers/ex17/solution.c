/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/26 10:46:15 by shobeedev // learn the why,              */
/*   Updated: 2026/08/26 10:53:48 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	//return (s1[i] - s2[i]);//ascending_cmp.
	return (s2[i] - s1[i]);//descending_cmp.
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char*	tmp;
	int		i;
	int		j;
	int		swp;

	i = 0;
	while (tab[i])
	{
		j = 0;
		swp = 0;
		while (tab[j + 1])
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
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

		ft_advanced_sort_string_tab(str + 1, ft_strcmp);
		i = 1;
		while (i < size)
		{
			printf("%s\n", str[i]);
			i++;
		}
	}
	return (0);
}
