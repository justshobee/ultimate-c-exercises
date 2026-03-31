/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/31 11:55:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/31 12:12:37 by shobeedev            tfaaty fi l3oolaa   */
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
char find_non_repeat(char str[])
{
	int freq[26] = {0};
	char ch;
	int i = 0;
	while(str[i] != '\0')
	{
		ch = to_lower(str[i]);
		if(ch >= 'a' && ch <= 'z')
			freq[ch - 'a']++;
		i++;
	}

	i = 0;
	while(i < 26)
	{
		if(freq[i] == 1)
			return (i + 'a');
		i++;
	}
	return '\0';
}

int main()
{
	char str[] = "aabbccddeef";

	char ch_norepeat = find_non_repeat(str);

	printf("First non-repeating character: '%c'\n",ch_norepeat);
}
