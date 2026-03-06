/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 17:36:09 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 17:52:33 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void fibseries(int nbr)
{
	int t1 = 0;
	int t2 = 1;
	int nextTerm = 0;
	int i = 3;
	printf("Fibonacci Series up to %d terms:\n%d %d ", nbr, t1, t2);
	while(i <= nbr)
	{
		nextTerm = t1 + t2;
		printf("%d ",nextTerm);
		t1 = t2;
		t2 = nextTerm;
		i++;
	}
}

int main()
{
	int nbr;
	printf("Enter a number : ");
	scanf("%d",&nbr);

	fibseries(nbr);

	return 0;
}
