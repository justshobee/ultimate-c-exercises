/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/11 09:23:22 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/11 12:09:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	//open arg
	char	*path;
	int		flags;
	mode_t	mode;
	int		fd;
	//write arg
	char	*buf;
	unsigned int		res;


	path = "data.txt";
	flags = O_CREAT | O_RDWR;
	mode = 0764;
	fd = open(path, flags, mode);
	if (fd == -1)
		ft_putstr("Error!\n");
	buf = "data.txt\nName : Mohammed Choubi\nAge : 22 yesrs\n";
	res = write(fd, buf, ft_strlen(buf));
	if (res == ft_strlen(buf))
		ft_putstr("Data successfully written to data.txt.\n");
	close(fd);
	return (0);
}
