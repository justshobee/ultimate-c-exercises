/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/13 11:46:37 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/13 11:54:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Letter flipper
*
* Description: Flips lowercase characters to uppercase and uppercase characters
* to lowercase in a C string.
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
	ft_putchar('\n');
}

int		is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char	*flippe_char(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main(int size, char **str)
{
	if (size == 2)
		ft_putstr(flippe_char(str[1]));
	return (0);
}
