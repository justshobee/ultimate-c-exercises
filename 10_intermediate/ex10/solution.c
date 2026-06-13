/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/13 10:22:15 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/13 10:29:04 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Vowel counter
* 
* Description: An example of how to count the number of vowels in a string.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_vowel(char c)
{
	return (c == 'a' || c == 'i' || c == 'o' || c == 'e' || c == 'u');
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

void	ft_putnbr(int nbr)
{
	long	n;
	long	div;

	n = nbr;
	div = 1;
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (div <= (n / 10))
		div *= 10;
	while (div > 0)
	{
		ft_putchar((n / div) + '0');
		n = n % div;
		div = div / 10;
	}
}

int		count_vowels(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (is_vowel(to_lower(str[i])))
			count++;
		i++;
	}
	return (count);
}

int		main(int size, char *str[])
{
	if (size == 2)
		ft_putnbr(count_vowels(str[1]));
	ft_putchar('\n');
	return (0);
}
