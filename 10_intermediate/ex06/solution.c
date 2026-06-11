/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/11 19:10:50 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/11 19:25:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Sum values in an array
* 
* Description: An example of how to sum the values in an array.
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

int		sum_arr(int arr[], int size)
{
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum += arr[i];
		i++;
	}
	return (sum);
}

int		main(void)
{
	// sample arrays
	int a1[] = {1,2,6,9,8,7,6,5};
	int a2[] = {100};
	int a3[] = {99,99};
	int a4[] = {50,-50,100,-100,200,-200};

	ft_putnbr(sum_arr(a1, (sizeof(a1) / sizeof(a1[0]))));
	ft_putchar('\n');
	ft_putnbr(sum_arr(a2, (sizeof(a2) / sizeof(a2[0]))));
	ft_putchar('\n');
	ft_putnbr(sum_arr(a3, (sizeof(a3) / sizeof(a3[0]))));
	ft_putchar('\n');
	ft_putnbr(sum_arr(a4, (sizeof(a4) / sizeof(a4[0]))));
	ft_putchar('\n');
	return (0);
}
