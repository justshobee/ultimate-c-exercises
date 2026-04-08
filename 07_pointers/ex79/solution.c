/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 18:03:05 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 18:27:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool isvowel(char ch)
{
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

char to_lower(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return ch + 32;
	else
		return ch;
}
int main(int count,char *str[])
{
	if(count == 2)
	{
		char *s = str[1];

		int i = 0;
		int vowels = 0,consts = 0;
		while(s[i] != '\0')
		{
			char ch = to_lower(s[i]);
			if(isvowel(ch))
				vowels++;
			else if(ch >= 'a' && ch <= 'z')
				consts++;
			i++;
		}

		printf("String : %s\n",s);
		printf("Total vowels : %d\n",vowels);
		printf("Total consonants : %d\n",consts);
		
	}
	return 0;
}
