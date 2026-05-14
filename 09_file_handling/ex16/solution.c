/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/14 19:39:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/14 19:57:45 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <lib.h>

# define SIZE (10 * 1024)

void	merge_files(char *nf, char *f1, char *f2)
{
	char	*buf[SIZE];
	int		fd;
	int		fd1;
	int		fd2;
	int		res;

	fd = open(f1, O_RDONLY);
	fd1 = open(f2, O_RDONLY);
	fd2 = open(nf, O_CREAT | O_RDWR | O_APPEND, 0764);
	res = read(fd, buf, SIZE);
	write(fd2, buf, res);
	res = read(fd1, buf, SIZE);
	write(fd2, buf, res);
	close(fd);
	close(fd1);
	close(fd2);
}

int		main(int size, char **str)
{
	if (size == 4)
	{
		merge_files(str[1], str[2], str[3]);
	}
	return (0);
}
