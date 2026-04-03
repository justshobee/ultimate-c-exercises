/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/04/03 07:33:58 by shobeedev               shobee4ever      */
/*   Updated: 2026/04/03 07:37:39 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int num = 100;
	int *ptr;

	ptr = &num;
	
	printf("Original value of num : %d\n",num);
	
	*ptr = 999;
	printf("New value of num after pointer assignment : %d\n",num);
}
