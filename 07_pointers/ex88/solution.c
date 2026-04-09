/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/09 11:05:24 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/09 11:15:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
bool check_digit(char *s)
{
	int i = 0;
	while(s[i] != '\0')
	{
		if(!(s[i] >= '0' && s[i] <= '9'))
			return false;
		i++;
	}
	return true;
}
int main(int count,char *str[])
{
	if(count == 2)
	{
		bool res = check_digit(str[1]);
	    printf("String: \"%s\"\n", str[1]);
    	if (res) {
       	 printf("Result: Contains only digits.\n");
    	} else {
       	 printf("Result: Contains non-digit characters.\n");
    	}
	}
	return 0;
}
