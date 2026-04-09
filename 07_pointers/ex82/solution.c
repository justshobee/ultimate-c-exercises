/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 08:32:34 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 08:39:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int first_acc(char *str,char tar)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == tar)
			return i;
		i++;
	}
	return -99;
}

int main(int count,char *strs[])
{
	if(count == 3)
	{
		char *str = *(strs + 1);
		char target = *(*(strs + 2) + 0);

		int index = first_acc(str,target);
		printf("First accurrence of '%c' found at index : %d\n",target,index);
	}
	return 0;
}
