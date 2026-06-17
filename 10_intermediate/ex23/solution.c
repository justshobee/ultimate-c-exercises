/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/17 09:19:50 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/17 09:53:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
 * Program: Count Bits
 *
 * Description: Write a function that counts and returns the number of bits
 * set to 1 in an unsigned integer.
 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int		is_bower_of_2(int n)
{
	return (n > 0 && (n & (n - 1)) == 0);
}

int		main(void)
{
	int		res;

	res = is_bower_of_2(2);
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}
