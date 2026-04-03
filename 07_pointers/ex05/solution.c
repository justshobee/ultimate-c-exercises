/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 10:26:11 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 10:37:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void increment_value(int *ptr)
{
	(*ptr)++;
}
int main()
{
	int nbr = 50;
	int *ptr = &nbr;

	printf("---- Before function call ----\n");
	printf("The number nbr = %d\n",nbr);
	printf("The adress of &nbr = %p\n",&nbr);
	printf("The adress stor in ptr = %p\n",ptr);
	printf("The value in add of *ptr = %d\n\n",*ptr);
	increment_value(ptr);
	printf("Operation (*ptr)++\n");
	
	printf("\n---- After function call ----\n");
	printf("The number nbr = %d\n",nbr);
	printf("The adress of &nbr = %p\n",&nbr);
	printf("The adress stor in ptr = %p\n",ptr);
	printf("The value in add of *ptr = %d\n",*ptr);
}
