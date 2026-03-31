/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/31 11:48:43 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/31 11:54:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char str[] = "eExxammpelle";
	char ch = 'e';
	
	int i = 0;
	int j = 0;
	while(str[i] != '\0')
	{
		if(str[i] != ch)
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';

	printf("String after removing '%c': %s\n",ch,str);
}
