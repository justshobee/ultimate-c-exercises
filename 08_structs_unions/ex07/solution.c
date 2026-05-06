/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 08:38:40 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 08:55:22 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct st_car
{
	int		m_year;
	char	color[15];
}	st_car;

void	get_data(st_car *car)
{
	printf("Enter car model year : ");
	scanf("%d",&(car)->m_year);
	printf("Enter car color : ");
	scanf("%s",(car->color));
}

void	print(st_car *car)
{
	printf("\n--- Car Details (via Pointer) ---\n");
	printf("Model year : %d\n",(*car).m_year);
	printf("Color : %s\n",car->color);
}

int		main(void)
{
	st_car	car;
	st_car	*p_car;

	p_car = &car;
	get_data(p_car);
	print(p_car);
	return (0);
}
