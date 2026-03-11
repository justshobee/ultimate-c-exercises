/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/11 11:46:12 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/11 11:49:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr;
	printf("Enter number : ");
	scanf("%d",&nbr);

	int sum = 0;
	for(int i = 1;i <= nbr;i++)
			sum += i;

	printf("The sum of numbers from 1 to %d is: %d\n",nbr,sum);

	return 0;

}
