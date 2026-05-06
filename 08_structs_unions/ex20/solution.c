/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 19:08:49 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 19:16:47 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	st_student
{
	char	name[20];
	float	per;//percentage
}	st_student;

float	calc_avg(st_student st[], int size)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < size)
	{
		res += st[i].per;
		i++;
	}
	return (res / size);
}

int	main(void)
{
	float	res;
	st_student st[4] = {
		{"Ahmed", 65},
		{"Sophie", 81},
		{"Ali", 92},
		{"Mohammed", 50}
	};

	res = calc_avg(st, 4);
	printf("The averag percentage in this class is %.2f\n",res);
	return (0);
}
