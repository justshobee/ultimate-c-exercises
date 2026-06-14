/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/14 19:30:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/14 19:36:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Replace char
* 
* Description: Example of how to replace one character with another in a string
* with C.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*replace_char(char *str, char s, char r)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == s)
			str[i] = r;
		i++;
	}
	return (str);
}

int		main(int size, char **str)
{
	if (size == 4)
		ft_putstr(replace_char(str[1], *str[2], *str[3]));
	ft_putchar('\n');
	return (0);
}
