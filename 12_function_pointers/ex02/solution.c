/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/24 20:02:22 by shobeedev // learn the why,              */
/*   Updated: 2026/08/24 20:10:30 by shobeedev // not only the how.           */
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
int		divide(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int compute(int index, int a, int b)
{
	int		(*op[4]) (int, int) = {add,subtract, multiply, divide};

	return (op[index](a, b));
}

//a.out index a b
int		main(int size, char **str)
{
	if (size == 4)
	{
		int		res;

		res = compute(atoi(str[1]), atoi(str[2]), atoi(str[3]));
		printf("%d\n",res);
	}
	return (0);
}

