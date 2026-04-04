/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/04 09:27:10 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/04 09:34:43 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool is_vowel(char ch)
{
	return (ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e');
}

char to_lower(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return ch +32;
	else
		return ch;
}

int count_vowel(char *str)
{
	int count = 0;
	char ch;
	while(*str != '\0')
	{
		ch = to_lower(*str);
		if(is_vowel(ch))
			count++;
		str++;
	}
	return count;
}
int main()
{
	char str[] = "The quick brown fox Jumps over the lazy dog";
	int vowels = count_vowel(str);

	printf("Sentence: %s\n",str);
	printf("Total number of vowels: %d\n",vowels);
	
	return 0;
}
