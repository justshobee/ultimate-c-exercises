/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/24 19:47:58 by shobeedev // learn the why,              */
/*   Updated: 2026/08/24 19:58:03 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		add(int a, int b)
{
	return (a + b);
}

int		subtract(int a, int b)
{
	return (a - b);
}

int		multiply(int a, int b)
{
	return (a * b);
}

int		division(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}


int apply_operation(int (*op)(int, int), int a, int b)
{
	int res = op(a, b);
	return (res);
}

int		main(int size, char **str)
{
	if (size == 3)
	{
		int		res;

		res = apply_operation(add, atoi(str[1]), atoi(str[2]));
		printf("add = %d\n", res);
		res = apply_operation(subtract, atoi(str[1]), atoi(str[2]));
		printf("subtract = %d\n", res);
		res = apply_operation(multiply, atoi(str[1]), atoi(str[2]));
		printf("multiply = %d\n", res);
		res = apply_operation(division, atoi(str[1]), atoi(str[2]));
		printf("division = %d\n", res);
	}
	return (0);
}
