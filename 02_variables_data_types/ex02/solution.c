/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 11:15:32 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 11:24:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	float a,b;

	a = 13.4;
	b = 7.9;

	float sum = a + b;
	float diff = a - b;
	float prod = a * b;
	float quot = a / b;

	printf("%.2f + %.2f = %.2f\n",a,b,sum);
	printf("%.2f - %.2f = %.2f\n",a,b,diff);
	printf("%.2f * %.2f = %.2f\n",a,b,prod);
	printf("%.2f / %.2f = %.2f\n",a,b,quot);
	return 0;
}
