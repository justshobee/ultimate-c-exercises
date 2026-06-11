/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/11 18:58:09 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/11 19:08:58 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Check if a string is a palindrome
* 
* Description: An example of a function for checking whether a string is a 
* palindrome or not.
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

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		is_palindrome(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	while (i <= (len / 2))
	{
		if (str[i] != str[len - i - 1])
			return (0);
		i++;
	}
	return (1);
}

int		main(int size, char **str)
{
	if (size == 2)
	{
		if (is_palindrome(str[1]))
			ft_putstr("The string is Palindrome.");
		else
			ft_putstr("The strinf is NOT Palindrome.");
	}
	ft_putchar('\n');
	return (0);
}
