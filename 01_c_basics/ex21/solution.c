/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 17:03:37 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 17:13:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int reverseDigit(int num)
{
	int rem = 0;
	int revN = 0;
	while(num != 0)
	{
		rem = num % 10;
		num = num / 10;
		revN = revN * 10 + rem;
	}
	return revN;
}

int main()
{
	int nbr;
	printf("Enter a number : ");
	scanf("%d",&nbr);

	printf("the reverse of %d is : %d\n",nbr,reverseDigit(nbr));

	return 0;
}
