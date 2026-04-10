/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/10 11:14:22 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/10 11:32:56 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int tt_atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int i = 0;
	while(s[i] == ' ')
		i++;
	
	if(s[i] == '-')
	{
		sign = -sign;
		i++;
	}else if(s[i] == '+')
		i++;
	int nbr = 0;
	while(s[i] != '\0')
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			nbr = s[i] - '0';
			res = (res * 10) + nbr;
		}else
			break;
		i++;
	}
	return sign * res;
}
int main(int count,char *str[])
{
	if(count == 2)
	{
		int nbr = tt_atoi(str[1]);
		printf("\"%s\" -> %d\n",str[1],nbr);
	}
}
