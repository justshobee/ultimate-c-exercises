/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/13 10:34:26 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/13 11:01:50 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: String append (i.e. concatenation)
* 
* Description: Appends a string to another string in C using dynamic memory 
* allocation to allocate enough space on the heap to store the new string.  
* Though C has a strcat() function in the string.h library, it will only work 
* successfully if the first char array argument has enough space to hold the 
* content of both strings, as the concatenated string is stored here.  The 
* function provided here will work by creating a new string on the heap and 
* storing the result of the append there.
*/

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*str_cpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*str_append(char *s1, char *s2)
{
	char	*str;
	int		size;

	str = NULL;
	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str_cpy(str, s1);
	str_cpy(str + ft_strlen(s1), s2);
	return (str);
}

int		main(int size, char **str)
{
	if (size == 3)
	{
		char	*s;

		s = str_append(str[1], str[2]);
		ft_putstr(s);
		free(s);
		s = NULL;
	}
	ft_putchar('\n');
	return (0);
}

// Visualization of what is happening in memory and the function with s1, s2, s
//
// s1 - "abc" - s1_length = 3
// a  b  c  \0  <- data
// 0  1  2  3   <- indexes
//
// s2 - "wxyz" - s2_length = 4
// w  x  y  z  \0  <- data
// 0  1  2  3  4   <- indexes
//
// s - "abcwxyz" - s has a length of 7 (a size of 8 incl. the null terminator)
// a  b  c  w  x  y  z  \0
// 0  1  2  3  4  5  6  7  <- indexes
//

