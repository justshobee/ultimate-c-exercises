/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/06 10:41:24 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/06 10:43:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int i = 1;

	do
	{
		if(i % 2 != 0)
			printf("%d ",i);
		i++;
	}while(i <= 20);

	return 0;
}
