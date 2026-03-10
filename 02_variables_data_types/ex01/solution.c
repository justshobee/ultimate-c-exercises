/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 11:02:05 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 11:17:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int a,b;

	a = 20;
	b = 10;

	int sum = a + b;
	int diff = a - b;
	int prod = a * b;
	int quot = a / b;
	printf("%d + %d = %d\n",a,b,sum);
	printf("%d - %d = %d\n",a,b,diff);
	printf("%d * %d = %d\n",a,b,prod);
	printf("%d / %d = %d\n",a,b,quot);

	return 0;
}
