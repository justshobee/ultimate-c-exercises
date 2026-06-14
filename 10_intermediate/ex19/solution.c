/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/14 18:40:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/14 18:54:11 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Remove character from a string
*
* Description: Example of how to to remove all occurrences of a character from
* a string in C.
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
		ft_putchar(str[i++]);
}

char	*remove_char(char *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

int		main(int size, char **str)
{
	if (size == 3)
		ft_putstr(remove_char(str[1], *str[2]));
	ft_putchar('\n');
	return (0);
}
