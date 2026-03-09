/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/09 11:23:30 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/09 11:39:13 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void square_value(int *ptr)
{
	*ptr = (*ptr) * (*ptr);
}
int main()
{
	int x = 5;

	square_value(&x);

	printf("Original value of x: %d\n",x);
	printf("Value of x after function call: %d\n",x);


	return 0;
}
