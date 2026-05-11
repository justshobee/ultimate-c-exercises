/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/11 18:53:13 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/11 19:02:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>
#include <fcntl.h>

int		main(void)
{
	int		fd;
	int		res;
	int		len;
	char	buf[100];

	fd = open("data.txt", O_RDONLY);
	res = read(fd, buf, 100);
	len = res;
	while (res > 0)
	{
		res = read(fd, buf, 100);
		len += res;
	}
	ft_putstr("Total number of characters in the file: ");
	ft_putnbr(len);
	ft_putchar('\n');
	close(fd);
	return (0);
}

