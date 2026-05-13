/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/13 10:02:36 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/13 10:36:47 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"

#define SIZE 1024

int		ismath(char *str, char *search)
{
	int		i;

	i = 0;
	while (search[i] != '\0')
	{
		if (search[i] != str[i])
			return (0);
		i++;
	}
	return (1);
}

void	replace(char *str, char *repl, int *index)
{
	int		i;

	i = 0;
	while (repl[i] != '\0')
	{
		str[i] = repl[i];
		i++;
	}
	*index += i;
}

char	*search(char *str, char *srch, char *repl)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == *srch)
		{
			if (ismath(str + i, srch) == 1)
				replace(str + i, repl, &i);
		}
		i++;
	}
	return (str);
}

void	update(char *path, char *srch, char *replace)
{
	int		fd1;
	int		fd2;
	int		byte;
	char	buf[SIZE + 1];

	fd1 = open(path, O_RDWR);
	fd2 = open("modified.txt", O_CREAT |O_TRUNC | O_RDWR, 0764);
	while ((byte = read(fd1, buf, SIZE)) > 0)
	{
		buf[byte] = '\0';
		search(buf, srch, replace);
		write(fd2, buf, byte);
	}
	ft_putstr(buf);
	close(fd1);
	close(fd2);
}

int		main(int size, char **str)
{
	if (size == 4)
	{
		update(str[1], str[2], str[3]);
	}
	return (0);
}
