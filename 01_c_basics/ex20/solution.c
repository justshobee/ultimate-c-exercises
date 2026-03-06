/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 11:24:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 11:41:25 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int countDigit(long long num)
{
	int counter = 0;
	int rem = 0;
	while(num != 0)
	{
		rem = num % 10;
		num = num / 10;
		counter++;
	}
	return counter;
}

int main()
{
	long long num;
	printf("Enter a number : ");
	scanf("%lld",&num);

	printf("The number %lld has %d digit.\n",num,countDigit(num));

	return 0;
}


