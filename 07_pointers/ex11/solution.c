/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 17:55:32 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 18:05:48 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int tt_strlen(char *str)
{
	int len = 0;
	while(*str != '\0')
	{
		len++;
		str++;//increment to next adress
	}
	return len;
}
int main()
{
	char str[] = "Hello Pointers!";
	
	int len_str = tt_strlen(str);
	printf("The string si : \"%s\"\n",str);
	printf("Length using tt_strlen() : %d\n",len_str);
}
