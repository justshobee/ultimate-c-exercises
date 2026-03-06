/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 10:46:12 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 10:49:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr;
	printf("Multiplication table for : ");
	scanf("%d",&nbr);

	for(int i = 1;i <= 10;i++)
		printf("%d * %d = %d\n",i,nbr,i * nbr);

	return 0;
}
