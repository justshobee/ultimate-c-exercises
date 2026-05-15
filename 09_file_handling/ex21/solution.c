/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/15 17:38:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/15 17:45:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"

# define SIZE 10 * 1024

void	detrmine_size(void)
{
	char	buf[SIZE];
	int		fd;
	int		size;

	fd = open("data.txt", O_RDONLY);
	size = read(fd, buf, SIZE);
	ft_putstr("the size of 'data.txt' is : ");
	ft_putnbr(size);
	ft_putstr(" bytes\n");
	close(fd);
}

int		main(void)
{
	detrmine_size();
	return (0);
}
