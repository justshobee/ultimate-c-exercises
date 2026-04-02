/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/01 19:12:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/02 09:38:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int tt_strlen(char str[])
{
	int i = 0;
	while(str[i] != '\0')
		i++;

	return i;
}
char to_lower(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return ch + 32;
	else
		return ch;
}
bool is_anagrams(char str1[],char str2[])
{
	int len1 = tt_strlen(str1);
	int len2 = tt_strlen(str2);
	if(len1 != len2)
		return false;
	int freq[26] = {0};
	int i = 0;
	while(str1[i] != '\0')
	{
		if(str1[i] >= 'A' && str1[i] <= 'Z' || str1[i] >= 'a' && str1[i] <= 'z')
			freq[to_lower(str1[i]) - 'a']++;
		i++;
	}
	
	i = 0;
	while(str2[i] != '\0')
	{
		if(str2[i] >= 'A' && str2[i] <= 'Z' || str2[i] >= 'a' && str2[i] <= 'z')
			freq[to_lower(str2[i]) - 'a']--;
		i++;
	}
	
	i = 0;
	while(i < 26)
	{
		if(freq[i] != 0)
			return false;
		i++;
	}
	return true;
}
int main()
{
	char str1[] = "liste1n";
	char str2[] = "silent";

	bool is_anagram = is_anagrams(str1,str2);

	printf("String 1 : %s\n",str1);
	printf("String 2 : %s\n",str2);
	if(is_anagram)
		printf("They are anagrams.\n");
	else
		printf("They are NOT anagrames\n");
}
