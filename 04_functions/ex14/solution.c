/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/15 12:17:58 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/15 12:27:11 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int fib(int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	return (fib(n - 1) + fib(n - 2));
}

int main()
{
	int nbr = 7;
	printf("The %d-th Fibonacci number is: %d\n", nbr, fib(nbr));

	int i = 0;
	while(i <= nbr)
	{
		printf("%d ",fib(i));
		i++;
	}
	return 0;
}
