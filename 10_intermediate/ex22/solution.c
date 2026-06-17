/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/17 09:19:50 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/17 09:30:03 by shobeedev            tfaaty fi l3oolaa   */
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

int		count_bits(unsigned int n)
{
	int		count;
	int		i;

	i = 0;
	while (i < (4 * 8))
	{
		if ((n & (1 << i)) >> i)
			count++;
		i++;
	}
	return (count);
}

int		main(void)
{
	int		n;
	int		count;

	n = 1;
	count = count_bits(n);
	ft_putnbr(count);
	ft_putchar('\n');
	return (0);
}
