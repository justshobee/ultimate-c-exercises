/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/17 14:12:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/17 14:24:01 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int sum_all(int nbr, ...)
{
	va_list args;
	va_start(args,nbr);

	int i = 0;
	int num, sum = 0;
	while(i < nbr)
	{
		num = va_arg(args,int);
		sum += num;
		i++;
	}
	va_end(args);
	return sum;
}

int main()
{
    // Calling with 3 numbers: 10 + 20 + 30 = 60
    int result1 = sum_all(3, 10, 20, 30);
    printf("Sum of 3 numbers: %d\n", result1);

    // Calling with 5 numbers: 1 + 2 + 3 + 4 + 5 = 15
    int result2 = sum_all(5, 1, 2, 3, 4, 5);
    printf("Sum of 5 numbers: %d\n", result2);

    return 0;
}
