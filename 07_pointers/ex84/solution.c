/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 09:49:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 10:02:11 by shobeedev            tfaaty fi l3oolaa   */
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
int main(int count,char *strs[])
{
	if(count == 2)
	{
		char *s = strs[1];
		
		int freq[26]= {0};

		int i = 0;
		char ch;
		while(s[i] != '\0')
		{
			ch = to_lower(s[i]);
			if(ch >= 'a' && ch <= 'z')
				freq[ch - 'a']++;
			i++;
		}

		printf("Character frequencies (a - z) : \n");
		i = 0;
		while(i < 26)
		{
			if(freq[i] != 0)
				printf("'%c' : %d\n",i + 'a',freq[i]);
			i++;
		}
	}
	return 0;
}
