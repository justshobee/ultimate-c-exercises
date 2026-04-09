/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 09:17:48 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 09:23:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int tt_strlen(char *s)
{
	int i = 0;
	while(s[i] != '\0')
		i++;
	
	return i;
}
int last_acc(char *s,char tar)
{
	int len = tt_strlen(s) - 1;
	while(len >= 0)
	{
		if(s[len] == tar)
			return len;
		len--;
	}
	return -99;

}
int main(int count,char *str[])
{
	if(count == 3)
	{
		char *s = *(str + 1);
		char target = *str[2];

		int index = last_acc(s,target);
		printf("Last accurrence of '%c' found at index: %d\n",target,index);
	}

	return 0;
}
