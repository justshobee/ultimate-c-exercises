/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/05 19:29:51 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/05 19:43:37 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct st_date
{
	int		day;
	int		month;
	int		year;
} st_date;

typedef struct st_employee
{
	int		id;
	char	name[20];
	st_date	joining_date;
} st_employee;

st_employee	read_struct(void)
{
	st_employee	emp;

	printf("Enter Id : ");
	scanf("%d",&(emp.id));
	printf("Enter employee name : ");
	scanf("%s",emp.name);
	printf("Enter joining day (dd): ");
	scanf("%d",&(emp.joining_date.day));
	printf("Enter joining month (mm): ");
	scanf("%d",&(emp.joining_date.month));
	printf("Enter joining year (yyyy): ");
	scanf("%d",&(emp.joining_date.year));
	return (emp);
}

void	print_emp(st_employee emp)
{
	printf("\n--- Employee Details ---\n");
	printf("ID : %d\n",emp.id);
	printf("Name : %s\n",emp.name);
	printf("Joining date : %d/%d/%d\n",emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);
}

int	main(void)
{
	st_employee	emp;

	emp = read_struct();
	print_emp(emp);
	return (0);
}
