/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/25 20:50:01 by shobeedev // learn the why,              */
/*   Updated: 2026/08/25 21:02:57 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_empty(char *str)
{
	return (*str == '\0');
}

int		is_digit_string(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int		ft_count_if(char **tab, int length, int (*f)(char *))
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

int		main(int size, char **str)
{
	if (size > 1)
		printf("%d\n",ft_count_if(str + 1, size - 1, is_digit_string));
	return (0);
}
