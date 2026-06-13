/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/13 19:20:57 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/13 19:37:12 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Word counter
* 
* Description: Counts the occurrences of a word in a string in C.
*/

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		is_match(char *s, char *wd)
{
	int		i;

	i = 0;
	while (wd[i] != '\0')
	{
		if (wd[i] != s[i])
			return (0);
		i++;
	}
	return (1);
}

int		word_count(char *str, char *wd)
{
	int		i;
	int		count;
	int		len;

	i = 0;
	count = 0;
	len = ft_strlen(wd);
	while (str[i] != '\0')
	{
		if (str[i] == *wd)
		{
			if (is_match(str + i, wd))
			{
				count++;
				i += len;
				continue ;
			}
		}
		i++;
	}
	return (count);
}

int main(void)
{
  // test case 1
  char s1[] = "It is in this string once.";
  char w1[] = "It";
  int result1 = word_count(s1, w1);
  printf("Result 1: %d\n", result1);

  // test case 2
  char s2[] = "This is in in in the word.";
  char w2[] = "in";
  int result2 = word_count(s2, w2);
  printf("Result 2: %d\n", result2);

  return 0;
}
