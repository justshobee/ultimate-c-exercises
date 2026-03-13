/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/13 11:18:19 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/13 11:25:29 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int tt_pow(int base,int exp)
{
	int i = 1;
	int pow = 1;
	while(i <= exp)
	{
		pow *= base;
		i++;
	}

	return pow;
}
int main()
{
	int num = 153;

	int rem = 0;
	int nbr = num;
	int armgs = 0;
	while(nbr != 0)
	{
		rem = nbr % 10;
		armgs += tt_pow(rem,3);
		nbr = nbr / 10;
	}

	if(armgs == num)
		printf("%d is an ARMSTRONG number.\n",num);
	else
		printf("%d is NOT a ARMSTRONG number.\n",num);

	return 0;
}
