/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/05 10:50:49 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/05 10:55:07 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int num1,num2;

	printf("Enter  the first number : ");
	scanf("%d",&num1);

	printf("Enter the second number : ");
	scanf("%d",&num2);

	int sumTwoNbr = num1 + num2;

	printf("the sum of %d and %d is : %d",num1,num2,sumTwoNbr);

	return 0;
}
