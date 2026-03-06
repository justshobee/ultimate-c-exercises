/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 17:15:48 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 17:23:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int revNbr(int nbr)
{
	int rev = 0;
	int rem = 0;
	while(nbr != 0)
	{
		rem = nbr % 10;
		nbr = nbr / 10;
		rev = rev * 10 + rem;
	}
	return rev;
}

void checkPlindrom(int nbr)
{
	if(revNbr(nbr) == nbr)
		printf("%d is a PLINDROM.\n");
	else
		printf("%d is NOT a PLINDROM.\n");
}

int main()
{
	int nbr;
	printf("Enter a number : ");
	scanf("%d",&nbr);

	checkPlindrom(nbr);
	return 0;
}

