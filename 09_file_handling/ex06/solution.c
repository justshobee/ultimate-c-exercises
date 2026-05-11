/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/11 19:26:54 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/11 19:42:58 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>
#include <fcntl.h>

bool	ispace(char c)
{
	return (c == '\n' || c == ' ' || c == '\t');
}

int		count_words(char *str, int size, bool istart)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (!ispace(str[i]))
		{
			if ((i == 0 && istart) || ispace(str[i - 1]))
				count++;
		}
		i++;
	}
	return (count);
}

int		main(void)
{
	int		fd;
	char	buf[100];
	int		size;
	int		count;

	fd = open("subject.txt", O_RDONLY);
	size = read(fd, buf, 100);
	count = count_words(buf, size, true);
	while (size > 0)
	{
		size = read(fd, buf, 100);
		count += count_words(buf, size, false);
	}
	ft_putstr("Total number of words in the file: ");
	ft_putnbr(count);
	ft_putchar('\n');
	close(fd);
	return (0);
}
