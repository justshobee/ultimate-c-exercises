/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/11 18:33:33 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/11 18:51:45 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Reverse an array
* 
* Description: An example of a function for reversing the contents of an array.
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

void	swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	rev_arr(int arr[], int size)
{
	int		i;

	i = 0;
	while (i <= (size / 2))
	{
		swap(&arr[i], &arr[size - i - 1]);
		i++;
	}
}

void	ft_putarr(int arr[], int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(arr[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	// two example arrays
	int myarray1[] = {1,2,3,4,5,6,7,8,9};
	int myarray2[] = {6,5,4,3,2,1};

	// reverse the arrays
	rev_arr(myarray1, 9);
	rev_arr(myarray2, 6);

	// print the arrays
	ft_putarr(myarray1, 9);
	ft_putarr(myarray2, 6);

	return (0);
}
