/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/13 08:55:02 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/13 09:46:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"

# define B_SIZE 1024

bool	ispace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		ismath(char *str, char *word)
{
	int		i;

	i = 0;
	while (word[i] != '\0')
	{
		if (str[i] != word[i])
			return (0);
		i++;
	}
	return (1);
}

int		count_word(char *str, char *word)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (!ispace(str[i]) && str[i] == *word)
		{
			if (ismath(str + i, word) == 1)
				count++;
		}
		i++;
	}
	return (count);
}

int		search_word(char *path, char *word)
{
	char	buf[B_SIZE + 1];
	int		byte;
	int		fd;
	int		count;

	fd = open(path, O_RDONLY);
	count = 0;
	while ((byte = read(fd, buf, B_SIZE)) > 0)
	{
		buf[byte] = '\0';
		count += count_word(buf, word);
	}
	close(fd);
	return (count);
}

int		main(int size, char **str)
{
	if (size == 3)
	{
		int		n;

		n = search_word(str[1], str[2]);
		ft_putstr("The word ");
		ft_putstr(str[2]);
		ft_putstr(" appears ");
		ft_putnbr(n);
		ft_putstr(" times in ");
		ft_putstr(str[1]);
		ft_putchar('\n');
	}
	return (0);
}
