/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/12 18:58:00 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/12 19:11:27 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

void	upper_case(char *str, int end)
{
	int		i;

	i = 0;
	while (i < end)
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

void	read_file(char *path, char *buf, int size)
{
	int		fd1;
	int		fd2;
	int		res;

	fd1 = open(path, O_RDONLY);
	fd2= open("new_data.txt", O_CREAT | O_RDWR, 0755);
	res = read(fd1, buf, size);
	upper_case(buf, res);
	res = write(fd2, buf, res);
	if (res > 0)
		ft_putstr("Successfully\n");
	close(fd1);
	close(fd2);
}

int		main(int size, char **str)
{
	if (size == 2)
	{
		int		s = 10 * 1024;
		char	buf[s];

		read_file(str[1], buf, s);
	}
	return (0);
}
