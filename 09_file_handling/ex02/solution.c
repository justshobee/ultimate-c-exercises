/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/11 17:45:36 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/11 18:26:12 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>
#include <fcntl.h>

int		main(void)
{
	int		fd;
	char	*path;
	int		flags;
	char	buf[50];
	int		size;

	path = "data.txt";
	flags = O_RDONLY;
	fd = open(path, flags);
	size = read(fd, buf, 50);
	while (size != 0)
	{
		write(1, buf, size);
		size = read(fd, buf, 50);
	}
	close(fd);
	return (0);
}
