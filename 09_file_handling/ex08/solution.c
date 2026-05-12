/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/12 09:41:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/12 10:54:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"
void	ft_print(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n')
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

void	line_ds(char *str,int line)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (line == 1)
	{
		ft_print(str + i);
		return ;
	}
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			count++;
		if (count == line - 1)
		{
			ft_print(str + i + 1);
			break ;
		}
		i++;
	}
}

void	display_line(char *path, char *buf, int size, int line)
{
	int		fd;
	int		res;

	fd = open(path, O_RDONLY);
	res = read(fd, buf, size);
	buf[res + 1] = '\0';
	if (res > 0)
		line_ds(buf, line);
	close(fd);
}

int		main(int count, char **str)
{
	int		size = 10 * 1024;//10KB
	char	buf[size + 1];
	int		input_line;

	if (count != 3)
	{
		ft_putstr("To Many arg\n");
		return (0);
	}
	input_line = ft_atoi(str[1]);
	display_line(str[2], buf, size, input_line);
	return (0);
}
