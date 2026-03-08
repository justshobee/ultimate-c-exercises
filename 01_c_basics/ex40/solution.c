/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/08 21:17:57 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/08 21:50:00 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct stDate
{
	int day;
	int month;
	int year;
};

struct stEmploye
{
		int id;
		char name[20];
		struct stDate date_of_joining;
};

int main()
{
	struct stEmploye emp;
	printf("Enter Employee ID: ");
	scanf("%d",&emp.id);
	printf("Enter Employee Name: ");
	scanf("%s",&emp.name);
	printf("Enter Date of Joining (day month year): ");
	scanf("%d %d %d",&emp.date_of_joining.day,&emp.date_of_joining.month,&emp.date_of_joining.year);

	printf("\n--- Employee Record ---\n");
	printf("ID : %d\n",emp.id);
	printf("Name : %s\n",emp.name);
	printf("Joining Date: %d/%d/%d\n",emp.date_of_joining.day,emp.date_of_joining.month,emp.date_of_joining.year);

	return 0;
}

