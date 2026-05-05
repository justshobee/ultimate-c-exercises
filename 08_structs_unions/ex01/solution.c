/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/05 18:29:41 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/05 18:51:51 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct st_student
{
	char	name[20];
	int		roll_number;
	float	percentage;
} st_student;

st_student read_struct(void)
{
	st_student	std;
	printf("Enter student name : ");
	scanf("%s", (std.name));
	printf("Enter roll number : ");
	scanf("%d", &(std.roll_number));
	printf("Enter percentage : ");
	scanf("%f",&(std.percentage));
	return (std);
}

void	print_struct(st_student std)
{
	printf("\n--- Student Details ---\n");
	printf("Name : %s\n", std.name);
	printf("Roll number : %d\n", std.roll_number);
	printf("Name : %.2f\n\n", std.percentage);
}

int		main(void)
{
	st_student	std;

	std = read_struct();
	print_struct(std);
	return (0);
}
