/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 10:32:52 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 10:50:36 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef union	un_data
{
	int		i;
	float	f;
	char	str[20];
}	un_data;

int		main(void)
{
	un_data		data;

	data.i = 1337;
	printf("1) after assigning data.i =  %d:\n",data.i);
	printf("data.i = %d\n",data.i);
	printf("Size of union : %ld\n\n",sizeof(un_data));

	data.f = 3.14;
	printf("2) after assinging data.f = %.2f:\n",data.f);
	printf("data.f = %.2f\n\n",data.f);

	printf("Printing data.i again : %d (this is a corupted or unintended data)\n",data.i);
	return (0);
}
