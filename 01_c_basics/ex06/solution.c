/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/05 11:36:37 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/05 12:00:34 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int main()
{
	int a,b;
	printf("Enter number 1 : ");
	scanf("%d",&a);
	printf("Enter number 2 : ");
	scanf("%d",&b);

	printf("---before swap---\n");
	printf("a = %d, b = %d\n",a,b);

	int tmp;

	tmp = a;
	a = b;
	b = tmp;

	printf("---after swap---\n");
	printf("a = %d, b = %d",a,b);

	return 0;
}
