/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/09 11:54:08 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/09 12:07:40 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int a ,b;
	a = 775;
	b = 92;

	int *ptrA,*ptrB;
	ptrA = &a;
	ptrB = &b;

	printf("Variable A holds: %d\n",*ptrA);
	printf("Variable B holds: %d\n",*ptrB);

	if(*ptrA > *ptrB)
		printf("A is larger (Value: %d).\n",*ptrA);
	else if( *ptrB > *ptrA)
		printf("B is larger (Value: %d).\n",*ptrB);
	else
		printf("The values are equal (Value: %d).\n", *ptrA);


	printf("\nAdd in ptrA : %p, Add in ptrB : %p\n",ptrA,ptrB);

	if(ptrA > ptrB)
		printf("(Address of B is higher than address of A)\n");
	else
		printf("(Address of A is higher than address of B)\n");


	return 0;
}
