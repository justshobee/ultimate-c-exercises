/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/12 12:03:29 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/12 12:08:58 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int rows = 3;

	int i = 1;
	while(i <= rows)
	{
		int j = 1;
		while(j <= i)
		{
			printf("%d ",j);
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
