/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 09:32:34 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 09:45:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct st_circle
{
	float	radius;
	float	area;
}	st_circle;

int	main(void)
{
	st_circle	*circle;
	float	PI;

	circle = NULL;
	PI = 3.14;
	circle = (st_circle *)malloc(sizeof(st_circle)* 1);
	
	printf("Enter Circle Radius : ");
	scanf("%f",&(circle)->radius);

	circle->area = PI * (circle->radius * circle->radius);

	printf("\n--- Dynamic Circle Report ---\n");
	printf("Radius : %.2f\n",circle->radius);
	printf("Area : %.2f\n",circle->area);
	free(circle);
	circle = NULL;
	return (0);
}
