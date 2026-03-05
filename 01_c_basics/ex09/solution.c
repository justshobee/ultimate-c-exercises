/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/05 17:01:08 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/05 17:03:26 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int num ;
	printf("Enter a number : ");
	scanf("%d",&num);

	if(num % 2 == 0)
		printf("%d is an EVEN number.\n",num);
	else
		printf("%d is an ODD number.\n",num);

	return 0;
}
