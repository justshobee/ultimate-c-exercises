/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/08 11:34:06 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/08 11:48:57 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char str[] = "Elon";

	int len = 0;
	while(str[len] != '\0')
		len++;

	int i = 0;
	char revstr[len + 1];//this +1 is for null term '\0'
	while(str[i] != '\0')
	{
		revstr[i] = str[len - i - 1];
		i++;
	}
	revstr[i] = '\0';

	printf("String : %s\n",str);
	printf("Reversed string : %s",revstr);

	return 0;
}
