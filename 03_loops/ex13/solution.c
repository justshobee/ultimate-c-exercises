/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/11 12:30:20 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/11 12:34:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int num = 1337;

	int rem = 0;
	int nbr = num;
	int rev_n = 0;

	while(nbr != 0)
	{
		rem = nbr % 10;
		rev_n = (rev_n * 10) + rem;
		nbr = nbr / 10;
	}

	printf("Original number: %d\n",num);
	printf("Reversed number: %d\n",rev_n);

	return 0;
}
