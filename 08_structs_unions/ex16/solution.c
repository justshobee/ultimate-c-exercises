/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 12:06:47 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 18:08:23 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	st_operation
{
	int		opr1;
	int		opr2;
	int		(*op_func)(int, int);
}	st_opr;

int		add(int a, int b)
{
	return (a + b);
}

int		subtract(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	st_opr	opr;
	int		res;

	opr.opr1 = 50;
	opr.opr2 = 15;
	opr.op_func = &add;
	res = opr.op_func(opr.opr1, opr.opr2);
	printf("Addition (%d + %d) : %d\n",opr.opr1, opr.opr2,res);

	opr.op_func = &subtract;
	res = opr.op_func(opr.opr1, opr.opr2);
	printf("Subtraction (%d - %d) : %d\n",opr.opr1, opr.opr2,res);
	return (0);
}
