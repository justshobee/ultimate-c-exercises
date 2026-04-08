/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 18:29:39 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 18:44:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool is_space(char s)
{
	return (s == ' ' || s == '\t');//etc... i want jus this two!
}
int count_words(char *s)
{
	int i = 0;
	int count = 0;
	while(s[i] != '\0')
	{
		if(!is_space(s[i]))
		{
			if(i == 0 || is_space(s[i-1]) == true)
				count++;
		}
		i++;
	}
	return count;
}
int count_words_m2(char *s)
{
	int i = 0;
	int counter = 0;
	bool isword = 0;
	while(s[i] != '\0')
	{
		if(is_space(s[i]))
			isword = 0;
		else if(isword == 0)
		{
			isword = 1;
			counter++;
		}
		i++;
	}
	return counter;
}
int main(int count,char *str[])
{
	if(count == 2)
	{
		int counter = count_words_m2(str[1]);
		printf("The string is : \"%s\"\n",str[1]);
		printf("Total number of words : %d\n",counter);
	}
	return 0;
}

