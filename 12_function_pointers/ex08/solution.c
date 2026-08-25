/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/25 11:18:53 by shobeedev // learn the why,              */
/*   Updated: 2026/08/25 12:16:09 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef int (*fngop) (int, int);

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

int		mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}

int		(*get_op_m1(char op))(int, int)
{
	if (op == '+')
		return (add);
	else if (op == '-')
		return (subtract);
	else if (op == '*')
		return (multiply);
	else if (op == '/')
		return (divide);
	else if (op == '%')
		return (mod);
	else
		return (NULL);
}

fngop	get_op_m2(char op)
{
	if (op == '+')
		return (add);
	else if (op == '-')
		return (subtract);
	else if (op == '*')
		return (multiply);
	else if (op == '/')
		return (divide);
	else if (op == '%')
		return (mod);
	else
		return (NULL);
}



int		main(int size, char **str)
{
	if (size == 4)
	{
		int		(*gop) (int, int);
		int		a, b;

		gop = get_op_m2(*str[3]);
		a = atoi(str[1]);
		b = atoi(str[2]);
		printf("calling it with (%d, %d) -> %d\n", a, b, gop(a, b));
	}
	return (0);
}
