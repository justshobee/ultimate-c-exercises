/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 08:56:58 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 09:11:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct st_time
{
	int		hour;
	int		min;
	int		sec;
}	st_time;

void	get_data(st_time *t)
{
	printf("(HH MM SS) : ");
	scanf("%d %d %d",&(t->hour),&(t->min),&(t->sec));
}

bool	check_time(st_time *c1, st_time *c2)
{
	return ((c1->hour == c2->hour) && (c1->min == c2->min) && (c1->sec == c2->sec));
}

int	main(void)
{
	st_time		time[2];

	printf("Enter Time 1 ");
	get_data(time + 0);
	printf("Enter Time 2 ");
	get_data(time + 1);

	if (check_time(time + 0, time + 1))
		printf("\nBoth Time structures represent the SAME time.\n");
	else
		printf("\nTime structures NOT the SAME time.\n");
	return (0);
}
