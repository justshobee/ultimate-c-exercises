/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/11 19:27:18 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/11 19:39:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Array average
* 
* Description: An example of a function for computing the average of the 
* elements in an array.
*/

#include <unistd.h>
#include <stdio.h>

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

double		avg_arr(double arr[], int size)
{
	float		sum;
	int		i;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum += arr[i];
		i++;
	}
	return (sum / size);
}

int		main(void)
{
	// example arrays
	double arr1[] = {5.2,9.3,6.5,4.1,7.8};
	double arr2[] = {10.0};
	double arr3[] = {9.8,9.6};
	double arr4[] = {-50,50,-100,100,-2,2};	

	printf("arr1 avg: %.2lf\n", avg_arr(arr1,5));
	printf("arr2 avg: %.2lf\n", avg_arr(arr2,1));
	printf("arr3 avg: %.2lf\n", avg_arr(arr3,2));
	printf("arr4 avg: %.2lf\n", avg_arr(arr4,6));
}
