/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 11:48:03 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 17:56:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool is_match(char *start,char *needle)
{
	int i = 0;
	while(needle[i] != '\0')
	{
		if(needle[i] != start[i])
			return false;
		i++;
	}
	return true;
}

int search_subs(char *haystack,char *needle)
{
	int i = 0;
	while(haystack[i] != '\0')
	{
		if(haystack[i] == *needle && haystack[i+1] == *(needle + 1))
		{
			if(is_match((haystack + i),needle) == true)
				return i;
		}
		i++;
	}
	return -99;
}

int main(int count,char *str[])
{
	if(count == 3)
	{
		int res = search_subs(str[1],str[2]);
		printf("Haystack : \"%s\"\n",str[1]);
		printf("Needle : \"%s\"\n",str[2]);
		if(res != -99)
			printf("Substring found at index : %d\n",res);
		else
			printf("Substring not found\n");
	}
	return 0;
}
