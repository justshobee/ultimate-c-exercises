/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/25 16:33:22 by shobeedev // learn the why,              */
/*   Updated: 2026/08/25 18:15:19 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_empty(char *str)
{
	return (*str == '\0');
}

int		ft_any(char **tab, int (*f)(char *))
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

int		main(int size, char **str)
{
	if (size > 1)
		printf("%d\n", ft_any(str + 1, is_empty));
	return (0);
}
