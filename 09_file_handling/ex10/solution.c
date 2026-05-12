/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/12 18:16:12 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/12 18:47:06 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"

int		clen(int n)
{
	int		i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int		calc_sum(char *str, int size)
{
	int		i;
	int		n;
	int		sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		n = ft_atoi(str + i);
		sum += n;
		i += clen(n) + 1;
	}
	return (sum);
}
void	read_numbers(char *buf, int size)
{
	int		fd;
	int		res;

	fd = open("data.txt", O_RDONLY);
	res = read(fd, buf, size);
	if (res > 0)
	{
		ft_putstr("Reading numbers from file and calculating sum...\n");
		ft_putstr("Successfully processed all numbers.\n");
		ft_putstr("The total sum of the numbers is: ");
		ft_putnbr(calc_sum(buf, res));
		ft_putchar('\n');
	}
	close(fd);
}

int		main(void)
{
	int		size = 10 * 1024;
	char	buf[size];
	read_numbers(buf, size);
	return (0);
}
