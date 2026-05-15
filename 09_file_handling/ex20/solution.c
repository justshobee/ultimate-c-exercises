/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/15 10:26:55 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/15 12:46:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "lib.h"

# define SIZE 10 * 1024

typedef struct	st_student
{
	char	*name;
	int		roll_number;
	int		marks;
}	st_student;

void	fill_str(char *str, char *name, int *index)
{
	int		i;

	i = 0;
	while (name[i] != '\0')
	{
		str[i] = name[i];
		i++;
	}
	*index += i;
}

void	fill_nbr(char *str, int n, int *index)
{
	int		i;
	int		div;

	i = 0;
	div = 1;
	while (div <= (n / div))
		div *= 10;
	while (div > 0)
	{
		str[i] = (n / div) + '0';
		n = n % div;
		div = div / 10;
		i++;
	}
	*index += i;
}

void	fill_buf(char *str, st_student st)
{
	int		i;

	i = 0;
	fill_str(str + i, "Name : ", &i);
	fill_str(str + i, st.name, &i);
	str[i++] = '\n';
	fill_str(str + i, "Roll Number : ", &i);
	fill_nbr(str + i, st.roll_number, &i);
	str[i++] = '\n';
	fill_str(str + i, "Marks : ", &i);
	fill_nbr(str + i, st.marks, &i);
	str[i++] = '\n';
	str[i] = '\0';
}

void	record(st_student st)
{
	char	buf[SIZE];
	int		fd;
	int		res;

	fd = open("data.txt", O_CREAT | O_TRUNC | O_RDWR | O_APPEND, 0754);
	fill_buf(buf, st);
	res = write(fd, buf, ft_strlen(buf));
	if (res > 0)
		ft_putstr("The file has been created.\nThe file is updeted seccessfuly.\n");
	close(fd);
}

int		main(int size, char **str)
{
	if (size == 4)
	{
		st_student	st;

		st.name = str[1];
		st.roll_number = ft_atoi(str[2]);
		st.marks = ft_atoi(str[3]);

		record(st);
	}
	return (0);
}
