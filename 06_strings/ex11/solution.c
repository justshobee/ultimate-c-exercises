/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/30 07:09:50 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/30 07:14:58 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int count_sep_ch(char str[],char sepch)
{
	int counter = 0;
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == sepch)
			counter++;
		i++;
	}
	return counter;
}

int main()
{
	char str[] = "My name is Jessa";
	char sepch = 's';

	int counter = count_sep_ch(str,sepch);

	printf("String : %s\n",str);
	printf("Characeter : %c\n",sepch);
	printf("The character %c appears %d times in the string.\n",sepch,counter);

	return (0);
}
