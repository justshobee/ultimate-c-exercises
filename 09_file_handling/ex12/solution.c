/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/12 18:58:00 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/12 19:41:27 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"
bool	isvowel(char c)
{
	return (c == 'e' || c == 'o' || c == 'i' || c == 'u' || c == 'a');
}

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

char	*remove_vowels(char *str, char *nstr, int end)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < end)
	{
		if (!isvowel(ft_tolower(str[j])))
		{
			nstr[i] = str[j];
			i++;
		}
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}

void	read_file(char *path, char *buf, int size)
{
	int		fd1;
	int		fd2;
	int		res;
	char	nstr[10 * 1024];

	fd1 = open(path, O_RDONLY);
	fd2= open("new_data.txt", O_CREAT | O_RDWR, 0755);
	res = read(fd1, buf, size);
	remove_vowels(buf,nstr, res);
	res = write(fd2, nstr, ft_strlen(nstr));
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
