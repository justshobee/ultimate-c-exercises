/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/15 17:16:52 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/15 17:24:18 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int add(int a,int b)
{
	return a + b;
}

int subs(int a,int b)
{
	return a - b;
}

int opreation_on_data(int a,int b,int (*opr)(int,int))
{
	return (*opr)(a,b);
}

int main()
{
	int a = 50, b = 15;
	int add_opr = opreation_on_data(a,b,&add);
	int subs_opr = opreation_on_data(a,b,&subs);


	printf("a = %d,b = %d\n",a,b);
	printf("Operation (Add): %d\n",add_opr);
	printf("Operation (Subtract): %d\n",subs_opr);

	return 0;
}

