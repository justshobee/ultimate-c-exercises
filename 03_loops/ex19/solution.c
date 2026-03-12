/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/12 12:10:02 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/12 12:13:16 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int rows = 3;

	int i = rows;
	while(i >= 1)
	{
		int j = i;
		while(j >= 1)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i--;
	}

	return 0;
}
