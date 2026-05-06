/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 10:51:41 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 11:00:08 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


/*
 Explanation:

- Structure Size: The structure requires memory for all its members, 
one after the other. Due to memory alignment (padding), 
the size often exceeds the sum of the member sizes (1+4+4=9 bytes). 
The compiler adds padding so that the int and float (which typically 
need to start on an address divisible by 4) are correctly aligned. 
The total size here will likely be 12 bytes (1 byte for char, 
3 bytes padding, 4 bytes for int, 4 bytes for float).

 - Union Size: The union requires memory only for its largest member 
 (here, the int or float at 4 bytes, or 4 bytes if the largest is 4 bytes).
 The union size is 4 bytes (assuming standard sizes), 
 as all members share the same starting address.
*/


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
