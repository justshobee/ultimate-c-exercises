/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/12 13:27:54 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/12 13:44:33 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int start = 10,end = 20;

	int i = start;
	bool isprim;
	printf("Prime numbers between %d and %d are: \n",start,end);
	while(i <= end)
	{
		isprim = true;
		int j = 2;
		while(j <= i/2)
		{
			if(i % j == 0)
			{
				isprim = false;
				break;
			}
			j++;
		}
		if(isprim == true)
			printf("%d ",i);
		i++;
	}

	return 0;
}
