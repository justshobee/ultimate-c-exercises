/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/12 11:57:52 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/12 12:00:24 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int base, exp;

	base = 5;
	exp = 3;

	int pow = 1;
	int i = 0;
	while(i < exp)
	{
		pow = pow * base;
		i++;
	}

	printf("%d^%d = %d\n",base,exp,pow);

	return 0;
}
