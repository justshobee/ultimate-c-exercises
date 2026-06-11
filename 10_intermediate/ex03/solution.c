/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/11 18:20:31 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/11 18:32:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Count occurrences of a value in an array
* 
* Description: Example of counting the occurrences of a value in an array.
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

int		count_acc(int arr[], int size, int value)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (arr[i] == value)
			count++;
		i++;
	}
	return (count);
}

int		main(void)
{
	// test data
	int myarray1[] = {4,9,5,5,5,5,6,2,1,5};
	int myarray2[] = {0,0,1,1,0,2,0,3};

	// run tests 
	int findarr1_5 = count_acc(myarray1, 10, 5);
	int findarr2_0 = count_acc(myarray2, 8, 0);
	ft_putnbr(findarr1_5);
	ft_putchar('\n');
	ft_putnbr(findarr2_0);
	ft_putchar('\n');
	return (0);
}
