/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/13 10:01:23 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/13 10:20:38 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Fibonacci sequence
*
* Description: An example of how to compute the Fibonacci sequence both
* iteratively and recursively.
*/

#include <unistd.h>

/*
  Fibonacci sequence: the sequence of 
  numbers created by the sum of the two
  previous numbers, starting with 0 
  and 1.

  F_0 = 0
  F_1 = 1
  F_2 = 1
  F_3 = 2
  F_4 = 3
  F_5 = 5

  Sequence: 0, 1, 1, 2, 3, 5, 8, 13, ...

  Fib_n = Fib_n-1 + Fib_n-2
  F_0 = 0
  F_1 = 1
  F_2 = 1 + 0 = 1

*/

int		fib(int n)
{
	int		prev1;
	int		prev2;
	int		next;
	int		i;

	prev1 = 0;
	prev2 = 1;
	if (n == 0)
		return (prev1);
	if (n == 1)
		return (prev2);
	i = 1;
	while (i < n)
	{
		next = prev1 + prev2;
		prev1 = prev2;
		prev2 = next;
		i++;
	}
	return (next);
}

int		fib_rec(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (fib_rec(n - 1) + fib_rec(n - 2));
}

#include <stdio.h>
int		main(void)
{
	int		i;
	int		n;

	n = 10;
	printf("Iterative solution :\n");
	i = 0;
	while (i < n)
	{
		printf("%d ",fib_rec(i));
		i++;
	}

	printf("\n\nRecursive solution :\n");
	i = 0;
	while (i < n)
	{
		printf("%d ",fib_rec(i));
		i++;
	}
	return (0);
}
