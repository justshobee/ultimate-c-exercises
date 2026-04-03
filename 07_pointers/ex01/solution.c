/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 07:27:04 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 07:32:18 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int var = 1337;

	int * ptr;//decl
	ptr = &var;//init

	printf("Varaibles 'var' value : %d\n",var);
	printf("Varaibles 'var' value : %p\n",&var);
	printf("Pointer 'ptr' adress (value of ptr) : %p\n",ptr);
	printf("Value accessed via pointer (*ptr) : %d\n",*ptr);

	return 0;
}
