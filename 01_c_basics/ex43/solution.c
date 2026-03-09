/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/09 11:19:07 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/09 11:22:42 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int data = 100;

	printf("Initial value of data: %d\n",data);

	int *data_ptr = &data;

	*data_ptr = 250;

	printf("New value of data (modified via pointer): %d",data);

	return 0;
}
