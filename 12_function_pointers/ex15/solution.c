/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/26 09:58:49 by shobeedev // learn the why,              */
/*   Updated: 2026/08/26 10:26:54 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int		res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	return (res * sign);
}



int		add(int a, int b)
{
	return (a + b);
}

int		subtract(int a, int b)
{
	return (a - b);
}

int		mult(int a, int b)
{
	return (a * b);
}

int		divide(int a, int b)
{
	return (a / b);
}

int		mod(int a, int b)
{
	return (a % b);
}

int		(*do_op(char op, int b)) (int, int)
{
	if (op == '+')
		return (add);
	else if (op == '-')
		return (subtract);
	else if (op == '*')
		return (mult);
	else if (op == '/')
	{
		if (b == 0)
		{
			printf("Stop : division by zero.\n");
			return (NULL);
		}
		return (divide);
	}
	else if (op == '%')
	{
		if (b == 0)
		{
			printf("Stop : modulo by zero.\n");
			return (NULL);
		}
		return (mod);
	}
	else
	{
		printf("invalid operator\n");
		return (NULL);
	}
}

int		main(int size, char **str)
{
	if (size == 4)
	{
		int		(*fn) (int, int);
		int		a, b;
		char	op;

		a = ft_atoi(str[1]);
		b = ft_atoi(str[3]);
		op = *str[2];
		fn = do_op(op,  b);
		if (fn == NULL)
			return (0);
		printf("%d\n", fn(a, b));
	}
	return (0);
}


