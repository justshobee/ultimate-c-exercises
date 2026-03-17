/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/16 10:36:02 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/17 13:41:47 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern int add(int a,int b);

int main()
{
	int a = 42,b = 13;

	printf("%d + %d = %d\n",a,b,add(a,b));


	return 0;
}
