/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/24 21:15:53 by shobeedev // learn the why,              */
/*   Updated: 2026/08/24 21:40:03 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

struct st_calc
{
	int		(*op) (int, int);
	int		res;
};

typedef		struct st_calc calc;


int		multiply(int a, int b)
{
	return (a * b);
}

int		subtract(int a, int b)
{
	return (a - b);
}

int		divide(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

void	calculator_execute(calc *c, int a, int b)
{
	c->res = c->op(a, b);
}

int		add(int a, int b)
{
	return (a + b);
}

int		main(int size, char **str)
{
	if (size == 3)
	{
		calc	cl;

		cl.op = multiply;
		calculator_execute(&cl, atoi(str[1]), atoi(str[2]));
		printf("%d\n",cl.res);
	}
	return (0);
}
