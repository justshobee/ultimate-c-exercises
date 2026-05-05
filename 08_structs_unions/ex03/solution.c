/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/05 19:09:02 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/05 19:28:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct st_student
{
	char	name[20];
	int		roll_nbr;
	float	percentage;
}	st_student;

st_student	read_struct(void)
{
	st_student	std;
	printf("Name : ");
	scanf("%s",std.name);
	printf("Roll Number : ");
	scanf("%d",&(std.roll_nbr));
	printf("Percentage : ");
	scanf("%f", &(std.percentage));
	return (std);
}

int	find_high_per(st_student std[], int size)
{
	int	i;
	int	index;

	i = 1;
	index = 0;
	while (i < size)
	{
		if (std[index].percentage < std[i].percentage)
			index = i;
		i++;
	}
	return (index);
}

void	fill_struct(st_student std[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("Enter details for Student %d: \n",i + 1);
		std[i] = read_struct();
		printf("\n");
		i++;
	}
}
int	main(void)
{
	st_student	std[3];
	int		h_ix;

	fill_struct(std, 3);
	h_ix = find_high_per(std, 3);
	printf("\n--- Student with Highest Percentage ---\n");
	printf("Name : %s\n",std[h_ix].name);
	printf("Percentage : %.2f\n",std[h_ix].percentage);
	return (0);
}
