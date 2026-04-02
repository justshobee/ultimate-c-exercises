/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/02 10:18:13 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/02 10:55:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//ascii to intger
int tt_atoi(char str[])
{
	int i = 0;
	int extract_digit = 0,intger = 0;
	int sign = 1;
	while(str[i] == ' ')
		i++;

	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -sign;
		i++;
	}

	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			extract_digit = str[i] - '0';
			intger = (intger * 10) + extract_digit;
		}
		i++;
	}
	return intger*sign;
}

int main()
{
	char str1[] = "  --+--++123";
	char str2[] = "-456";

	int nbr = tt_atoi(str1);
	printf("%d\n",nbr);
}
