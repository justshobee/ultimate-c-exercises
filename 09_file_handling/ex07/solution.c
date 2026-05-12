/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/12 08:50:51 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/12 09:12:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>
#include <fcntl.h>

int		main(void)
{
	int		fd1;
	int		fd2;
	char	buf[4 * 1024]; //4KB
	int		size;

	fd1 = open("data.txt", O_RDONLY);
	fd2 = open("dest.txt", O_CREAT| O_RDWR, 0764);
	size = read(fd1, buf, (4 * 1024));
	if (size > 0)
		ft_putstr("dest.txt\n");
	while (size > 0)
	{
		write(fd2, buf, size);
		size = read(fd1, buf, (4 * 1024));
	}
	close(fd1);
	close(fd2);
	return (0);
}
