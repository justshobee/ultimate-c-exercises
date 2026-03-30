/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/30 06:46:10 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/30 06:59:46 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool is_vowel(char ch)
{
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
char to_lower(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	else
		return ch;
}
int main()
{
	char str[] = "Programming In C is fun.";

	char ch;
	int vowels = 0,consts = 0;
	int i = 0;
	while(str[i] != '\0')
	{
		ch = to_lower(str[i]);
		if(ch >= 'a' && ch <= 'z')
		{
			if(is_vowel(ch) == true)
				vowels++;
			else
				consts++;
		}
		i++;
	}

	printf("String : %s\n",str);
	printf("Total Vowels: %d\n",vowels);
	printf("Total Consonants: %d\n",consts);
	
	return (0);
}
