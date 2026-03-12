/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/12 11:11:48 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/12 11:57:15 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int nbr = 20;

	printf("Odd numbers from 1 to %d:\n",nbr);
	for(int i = 1; i <= nbr;i++)
	{
		if(i % 2 == 0)
			continue;
		printf("%d ",i);
	}

	return 0;
}
