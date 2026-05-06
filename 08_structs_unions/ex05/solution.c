/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 07:57:27 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 08:10:13 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	st_rectangle
{
	int		length;
	int		width;
} st_rect;

st_rect		read_st(void)
{
	st_rect		rect;
	printf("Enter length : ");
	scanf("%d",&(rect.length));
	printf("Enter width : ");
	scanf("%d",&(rect.width));
	return (rect);
}

void	calculate_properties(st_rect rect)
{
	int		area;
	int		per;
	printf("\n--- Calculation Results ---\n");
	printf("Length : %d, Width : %d\n",rect.length, rect.width);
	area = rect.length * rect.width;
	printf("Area : %d\n",area);
	per = 2 * (rect.length + rect.width);
	printf("Perimiter : %d\n",per);
}

int		main(void)
{
	st_rect		rect;

	rect = read_st();
	calculate_properties(rect);
	return (0);
}
