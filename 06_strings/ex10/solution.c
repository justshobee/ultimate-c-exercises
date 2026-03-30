/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/30 07:00:36 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/30 07:07:39 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count_words(char str[])
{
	int counter = 0;
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] != ' ')
		{
			if(i == 0 || str[i - 1] == ' ')
				counter++;
		}
		i++;
	}
	return counter;
}

int main()
{
	char str[] = "This is a test string";

	int count_w = count_words(str);
	printf("The string is: %s\n",str);
	printf("Total number of words: %d\n",count_w);

	return (0);
}
