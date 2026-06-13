/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/13 11:21:38 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/13 11:38:31 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
/*
* Program: Dice roll simulator
* 
* Description: An example of how to simulate dice rolls.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int		main(void)
{
	srand((unsigned)time(NULL));

	int		dice;
	int		roll;
	int		i;

	dice = 10;
	roll = 0;
	i = 0;
	while (i < dice)
	{
		roll = (rand() % 6) + 1;
		printf("Dice %d : %d\n",i + 1, roll);
		i++;
	}
	return (0);
}
