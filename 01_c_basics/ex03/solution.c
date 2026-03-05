/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/05 10:58:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/05 11:05:09 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void PrintCalc(int a,int b)
{
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	float dev = a / b;
	printf("%d / %d = %.2f\n",a,b,dev);
}

int main()
{
	int a,b;
	a = 20;
	b = 10;

	PrintCalc(a,b);

	return 0;
}
