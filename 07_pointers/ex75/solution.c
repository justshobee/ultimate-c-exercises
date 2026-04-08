/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/08 11:27:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/08 13:06:14 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int tt_strcmp(char *s1,char *s2)
{
	int i = 0;
	while(s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}
int main(int count,char *str[])
{
	if(count == 3)
	{
		char *s1 = str[1];
		char *s2 = str[2];

		int res = tt_strcmp(s1,s2);
		if(res == 0)
			printf("s1 and s2 are equal(%d)\n",res);
		else if(res > 0)
			printf("s1 > s2 (%d)\n",res);
		else
			printf("s1 < s2 (%d)\n",res);
	}
	return 0;
}
