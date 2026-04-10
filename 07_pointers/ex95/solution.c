/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/10 09:46:32 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/10 10:15:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool check_anagrams(char *s1,char *s2)
{
	int freq[26] = {0};
	int i = 0;
	while(s1[i] != '\0')
	{
		freq[s1[i] - 'a']++;
		i++;
	}

	i = 0;
	while(s2[i] != '\0')
	{
		freq[s2[i] - 'a']--;
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
int main(int count,char *strs[])
{
	if(count == 3)
	{
		bool res = check_anagrams(strs[1],strs[2]);
		if(res)
			printf("They are anagrams.\n");
		else
			printf("They are NOT equal.\n");
	}
	return 0;
}
