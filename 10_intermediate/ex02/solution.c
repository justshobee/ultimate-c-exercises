/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/11 18:07:18 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/11 18:19:04 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Find max in an array
* 
* Description: Example of finding the maximum value in an array in C.
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

int		find_max(int arr[], int size)
{
	int		i;
	int		max;

	i = 0;
	max = 0;
	while (i < size)
	{
		if (max < arr[i])
			max = arr[i];
		i++;
	}
	return (max);
}

int		main(void)
{
	// test data
	int myarray1[] = {8,7,5,3,9,10,1,2,4};
	int myarray2[] = {9,6,3,1,0,8};

	// run test
	int max1 = find_max(myarray1, 9);
	int max2 = find_max(myarray2, 6);
	ft_putnbr(max1);
	ft_putchar('\n');
	ft_putnbr(max2);
	ft_putchar('\n');
	return (0);
}

