/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/14 12:10:12 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/14 19:31:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"

# define SIZE (10 * 1024)

void	rev_str(char *str)
{
	char	*start;
	char	*end;

	start = str;
	end = str + (ft_strlen(str) - 1);
	while (start < end)
	{
		ft_swap(start, end);
		start++;
		end--;
	}
}

void	disp_rev(void)
{
	char	buf[SIZE + 1];
	int		fd;
	int		res;

	fd = open("data.txt", O_RDONLY);
	res = read(fd, buf, SIZE);
	buf[res] = '\0';
	rev_str(buf);
	ft_putstr(buf);
	close(fd);
}

int		main(void)
{
	disp_rev();
	return (0);
}
