/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 07:38:35 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 07:45:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int a = 10;
	float b = 20.5f;

	int *ptr_a = &a;
	float *ptr_b = &b;

	printf("Adress of intger varaible 'a' : %p\n",&a);
	printf("Adress of intger varaible 'b' : %p\n",&b);
	printf("Adress stored in pointer 'ptr_a' : %p\n",ptr_a);
	printf("Adress of pointer varaible 'ptr_a' : %p\n",&ptr_a);
	printf("Adress stored in pointer 'ptr_b' : %p\n",ptr_b);
	printf("Adress of pointer varaible 'ptr_b' : %p\n",&ptr_b);
	return 0;
}
