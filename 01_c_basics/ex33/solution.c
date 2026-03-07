/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/07 19:28:33 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/07 19:31:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char src[] = "shobeedev is here!";
	char dest[20];

	int i =0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';


	printf("src : %s\n",src);
	printf("dest : %s\n",dest);

	return 0;
}
