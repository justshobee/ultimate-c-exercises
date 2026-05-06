/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 10:51:41 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 10:57:32 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct st_testst
{
	char	c;
	int		i;
	float	f;
}	st_test;

typedef union un_testun
{
	char	c;
	int		i;
	float	f;
}	un_test;

int	main(void)
{
	printf("Size of 'char' (tybically %ld  byte)\n",sizeof(char));
	printf("Size of 'int' (tybically %ld byte)\n",sizeof(int));
	printf("Size of 'float' (tybically %ld byte)\n",sizeof(float));
	
	printf("\n----------------------------------\n");
	printf("Size of structer (struct) : %ld\n",sizeof(st_test));
	printf("Size of union (union) : %ld\n",sizeof(un_test));
	return (0);
}
