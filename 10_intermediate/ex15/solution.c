/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/06/13 18:46:41 by shobeedev               shobee4ever      */
/*   Updated: 2026/06/13 18:51:30 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

/*
* Program: Leap year checker
* 
* Description: An example of how to determine whether a year is a leap year.
*/

#include <stdio.h>

int		is_leap_y(int y)
{
	if (y % 4 != 0)
		return (0);
	else if (y % 100 != 0)
		return (1);
	else if (y % 400 != 0)
		return (0);
	else
		return (1);
}

int main(void)
{
  // determine which of the years from 1900-2100 are leap years
  for (int y = 1900; y <= 2100; y++)
  {
    if (is_leap_y(y))
      printf("%d LEAP YEAR\n", y);
    else 
      printf("%d\n", y);
  }

  return 0;
}
