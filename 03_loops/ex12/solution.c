/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/11 12:26:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/11 12:29:14 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);

	int counter = 0;
	int nbr = n;
	while(nbr != 0)
	{
		nbr = nbr / 10;
		counter++;
	}

	printf("The number of digits in %d is: %d\n",n,counter);

	return 0;
}
