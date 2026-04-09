/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 18:06:52 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 18:16:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int tt_strlen(char *s)
{
	int len = 0;
	while(s[len] != '\0')
	{
		len++;
	}
	return len;
}
bool is_palind(char *s)
{
	char *start = s;
	char *end = (s + tt_strlen(s)-1);
	while(start < end)
	{
		if(*start != *end)
			return false;
		start++;
		end--;
	}
	return true;
}

int main(int count,char *str[])
{
	if(count == 2)
	{
		bool res = is_palind(str[1]);

		if(res)
			printf("It is a palindrome.\n");
		else
			printf("It is NOT a palindrome.\n");
	}

	return 0;
}
