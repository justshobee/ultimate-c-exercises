/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/11 17:56:43 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/11 18:05:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Find min in an array
* 
* Description: Example of finding the minimum value in an array in C.
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
	if ( n == 0)
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
		div = div * 10;
	while (div > 0)
	{
		ft_putchar((n / div) + '0');
		n = n % div;
		div = div / 10;
	}
}

int		find_min(int arr[], int size)
{
	int		i;
	int		min;

	min = arr[0];
	i = 1;
	while (i < size)
	{
		if (arr[i] < min)
			min = arr[i];
		i++;
	}
	return (min);
}
int		main(void)
{
	int		arr[] = {42,9,6,7,10,3,6,4,0};
	int		size;
	int		min;

	size = sizeof(arr) / sizeof(arr[0]);
	min = find_min(arr, size);
	ft_putnbr(min);
	ft_putchar('\n');
	return (0);
}
