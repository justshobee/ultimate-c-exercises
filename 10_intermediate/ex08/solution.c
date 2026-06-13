/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/11 19:45:45 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/13 09:59:12 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Temperature conversion
*
* Description: A C program to convert Celsius temperatures to Fahrenheit.
* Converts temperatures from a start to end range incrementing by a step, all
* of which are input from the user.
*/

#include <unistd.h>
#include <stdio.h>


int		main(void)
{
	double	start;
	double	end;
	double	step;
	double	cel;
	double	fah;

	printf("Enter start temp : ");
	scanf("%lf",&start);
	printf("Enter end temp : ");
	scanf("%lf",&end);
	printf("Enter step value : ");
	scanf("%lf",&step);

	cel = 0;
	fah = 0;
	printf("\n\n************************\n");
	while (cel <= end)
	{
		printf("%.2lf\t",cel);
		fah = (1.8 * cel) + 32;
		printf("\t%.2lf\n",fah);
		cel += step;
	}
	return (0);
}
