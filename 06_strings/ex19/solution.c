/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/01 08:36:55 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/01 08:55:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int tt_strlen(char str[])
{
	int len = 0;
	while(str[len] != '\0')
		str[len++];
	return len;
}
int main()
{
	char src[] = "Programming In C";
	int start_i = 10; // Start from 'r' (index 4)
	int len = 7;      // Extract 7 characters ("ramming")
	char dest[15]; // Destination buffer size
	
	if(start_i >= tt_strlen(src))
	{
		printf("Error : start index older than len of string\n");
		return 1;
	}

	int i = 0;
	while(i < len)
	{
		if(src[start_i] == '\0')
			break;
		dest[i++] = src[start_i++];
	}
	dest[i] = '\0';

	printf("Source : %s\n",src);
	printf("Substring : %s\n",dest);

	return 0;
}
