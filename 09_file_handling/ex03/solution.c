/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/11 18:34:28 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/11 18:48:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>
#include <fcntl.h>

int		main(void)
{
	int		fd;
	char	*path;
	int		flags;
	char	*buf;
	int		res;

	path = "data.txt";
	flags = O_APPEND | O_WRONLY;
	fd = open(path, flags);
	buf = "Date Appended : 2019-00-00\nStatus: Successfully appended.\n";
	res = write(fd ,buf, ft_strlen(buf));
	if (res > 0)
		ft_putstr("Successfully appended.\n");
	close(fd);
	return (0);
}
