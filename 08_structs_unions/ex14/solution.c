/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 11:39:29 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 11:46:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef enum	en_dayofweek
{
	SUNDAY, MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}	en_dow;

int	main(void)
{
    printf("--- Days of the Week Values ---\n");
    printf("SUNDAY: %d\n", SUNDAY);
    printf("MONDAY: %d\n", MONDAY);
    printf("TUESDAY: %d\n", TUESDAY);
    printf("WEDNESDAY: %d\n", WEDNESDAY);
    printf("THURSDAY: %d\n", THURSDAY);
    printf("FRIDAY: %d\n", FRIDAY);
    printf("SATURDAY: %d\n", SATURDAY);
	return (0);
}

