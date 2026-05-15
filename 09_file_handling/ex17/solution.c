/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/15 08:24:32 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/15 09:45:19 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"

# define SIZE 10 * 1024

void	insert_char(char *str, char c, int pos)
{
	int		i;

	i = ft_strlen(str);
	pos = pos - 1;
	while (i >= pos)
	{
		str[i + 1] = str[i];
		i--;
	}
	str[pos] = c;
}

void	remove_char(char *str, int pos)
{
	int		i;

	i = pos - 1;
	while (str[i] != '\0')
	{
		str[i] = str[i + 1];
		i++;
	}
}
void	four_space(char *str, int pos)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		insert_char(str, ' ', pos);
		i++;
	}
}

char	*to_spaced(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t')
		{
			remove_char(str, i + 1);
			four_space(str, i + 1);
		}
		i++;
	}
	return (str);
}

void	replace_tab(void)
{
	char	buf[SIZE + 1];
	int		fd1;
	int		fd2;
	int		res;

	fd1 = open("tabbed.txt",O_RDONLY);
	fd2 = open("spaced.txt",O_CREAT | O_TRUNC | O_WRONLY, 0754);
	res = read(fd1, buf, SIZE);
	buf[res] = '\0';
	to_spaced(buf);
	if ( write(fd2, buf, ft_strlen(buf)) > 0)
		ft_putstr("The file spaced.txt has been created and writed!\n");
	close(fd1);
	close(fd2);
}

int		main(void)
{
	replace_tab();
	return (0);
}
