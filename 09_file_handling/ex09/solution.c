/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/12 10:59:11 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/12 11:44:55 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>
#include <fcntl.h>

char	*ft_tostr(char *str, int num, int *index)
{
	int		i;
	int		div;

	i = 0;
	div = 1;
	while (div <= (num / 10))
		div = div * 10;
	while (div > 0)
	{
		str[i] = (num / div) + '0';
		num = num % div;
		div = div / 10;
		i++;
	}
	str[i++] = '\n';
	*index += i;
	return (str);
}

char	*fill_buf(char *buf, int num, int *len)
{
	int		i;
	int		index;

	i = 0;
	index = 0;
	while (i < num)
	{
		ft_tostr(buf + index, (i + 1), &index);
		i++;
	}
	*len = index;
	return (buf);
}
void	write_series(char *path, int num)
{
	int		fd;
	int		size = 10 * 1024;
	char	buf[size];
	int		len;

	len = 0;
	fd = open(path, O_CREAT | O_WRONLY, 0764);
	fill_buf(buf,num, &len);
	if (len > 0)
	{
		write(fd, buf, len);
		ft_putstr("Seccessful!\n");
	}
	close(fd);
}

int		main(int size, char **str)
{
	if (size == 3)
	{
		write_series(str[2], ft_atoi(str[1]));
	}
	else
		ft_putstr("Invalid arg\n");
	return (0);
}
