/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 18:38:00 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 18:46:54 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	st_employee
{
	int		id;
	char	*name;
	int		salary;
}	st_emp;

int	search_emp(st_emp emp[], int size, int id)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (id == emp[i].id)
			return (i);
		i++;
	}
	return (-1);
}

int	main(void)
{
	int	index;
	st_emp emp[4] = {
        {101, "Alice", 60000.00},
        {102, "Bob", 75000.00},
        {103, "Charlie", 50000.00},
        {104, "Dana", 90000.00}
    };
	index = search_emp(emp, 4, 102);
	if (index == -1)
		printf("\nNot Found\n");
	printf("--- Employee Found ---\n");
	printf("id : %d\n",emp[index].id);
	printf("Name : %s\n",emp[index].name);
	printf("salary : %d\n",emp[index].salary);
	return (0);
}
