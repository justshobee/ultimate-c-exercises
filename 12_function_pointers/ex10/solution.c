/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/25 13:27:43 by shobeedev // learn the why,              */
/*   Updated: 2026/08/25 16:22:31 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


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
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	while (div <= (n / 10))
		div *= 10;
	while (div > 0)
	{
		ft_putchar(n / div + '0');
		n = n % div;
		div = div / 10;
	}
	ft_putchar('\n');
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int		main(int size, char **str)
{
	if (size > 1)
	{
		int		arr[size - 1];
		int		i;
		int		j;

		i = 0;
		j = 1;
		while (j < size)
		{
			arr[i] = atoi(str[j]);
			i++;
			j++;
		}
		ft_foreach(arr, size - 1, ft_putnbr);
	}
	return (0);
}
