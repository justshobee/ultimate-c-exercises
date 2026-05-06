/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 18:47:44 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 19:08:10 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
typedef struct	st_personal_info
{
	int		id;
	char	address[20];
}	st_per_info;

typedef struct	st_job_info
{
	int		id;
	char	title[20];
	int		salary;
}	st_job_info;

typedef struct st_full_record
{
	int		id;
	char	address[20];
	char	title[20];
	int		salary;
}	st_full_record;

st_full_record	merge_structer(st_per_info per, st_job_info job)
{
	st_full_record	record;

	record.id = per.id;
	strcpy(record.address, per.address);
	strcpy(record.title, job.title);
	record.salary = job.salary;

	return (record);
}

int	main(void)
{
	st_per_info	per = {102, "Madrid"};
	st_job_info	job = {477, "Architict", 82000};
	st_full_record	record;

	record = merge_structer(per, job);
	printf("--- Consolidated Employee Record ---\n");
	printf("ID : %d\n",record.id);
	printf("Address : %s\n",record.address);
	printf("Title : %s\n",record.title);
	printf("Salary : %d\n",record.salary);
	return (0);
}
