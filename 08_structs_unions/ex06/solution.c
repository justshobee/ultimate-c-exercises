/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 08:11:25 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 08:22:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	st_rectangle
{
	float	len;
	float	wid;
}	st_rect;

st_rect		get_data(void)
{
	st_rect		rect;

	printf("Enter length :");
	scanf("%f",&(rect.len));
	printf("Enter width :");
	scanf("%f",&(rect.wid));
	return (rect);
}

void	print(st_rect	rect)
{
	float	area;

	printf("\n--- Rectangle Report ---\n");
	area = rect.len * rect.wid;
	printf("Length : %.2f, Width : %.2f.\n",rect.len,rect.wid);
	printf("Calc Area : %.2f\n",area);
}

int		main(void)
{
	st_rect		rect;

	rect = get_data();
	print(rect);
	return (0);
}
