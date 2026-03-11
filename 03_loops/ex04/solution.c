/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/11 11:34:36 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/11 11:41:14 by shobeedev            tfaaty fi l3oolaa   */
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
	}while(i <= 200);

	return 0;
}
