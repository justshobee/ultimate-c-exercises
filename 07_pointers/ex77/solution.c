/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 17:48:38 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 17:54:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char to_lower(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return ch + 32;
	else
		return ch;
}

char *str_lowercase(char *str)
{
	int i = 0;
	while(str[i] !='\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = to_lower(str[i]);
		i++;
	}
	return str;
}
int main(int count,char *strs[])
{
	if(count == 2)
	{
		char *str = str_lowercase(strs[1]);
		printf("Lowercase string : %s\n",str);
	}

	return 0;
}
