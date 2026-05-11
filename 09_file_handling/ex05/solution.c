/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/11 19:10:15 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/11 19:20:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>
#include <fcntl.h>

int		count_line(char *str, int size)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int		main(void)
{
	int		fd;
	char	buf[100];
	int		count;
	int		size;

	fd = open("data.txt", O_RDONLY);
	count = 0;
	size = read(fd, buf, 100);
	while (size > 0)
	{
		count += count_line(buf, size);
		size = read(fd, buf, 100);
	}
	ft_putstr("Total number of lines in the file: ");
	ft_putnbr(count);
	ft_putchar('\n');
	close(fd);
	return (0);
}
