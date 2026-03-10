/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/10 11:59:43 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/10 12:02:13 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int a,b,c;
	float avg;
	printf("Enter three integers : ");
	scanf("%d %d %d",&a,&b,&c);

	avg = (a + b + c) / 3;

	printf("The average is: %.2f\n",avg);
}
