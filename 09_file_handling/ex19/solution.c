/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/15 09:47:26 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/15 10:14:21 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"

# define SIZE 10 * 1024

char	*rerot13(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'a' && str[i] <= 'm')
				str[i] += 13;
			else if (str[i] >= 'n' && str[i] <= 'z')
				str[i] -= 13;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'A' && str[i] <= 'M')
				str[i] += 13;
			else if (str[i] >= 'N' && str[i] <= 'Z')
				str[i] -= 13;
		}
		i++;
	}
	return (str);
}

void	simple_encryption(void)
{
	int		fd1;
	int		fd2;
	char	buf[SIZE + 1];
	int		res;

	fd1 = open("encrypted.txt", O_RDONLY);
	fd2 = open("decrypted.txt", O_CREAT | O_TRUNC | O_RDWR, 0754);
	res = read(fd1, buf, SIZE);
	buf[res] = '\0';
	rerot13(buf);
	if (write(fd2, buf, res) > 0)
		ft_putstr("The file decrypted.txt has been create.\ndecryption Data Has been seccessfuly.\n");
	close(fd1);
	close(fd2);
}

int		main(void)
{
	simple_encryption();
	return (0);
}
