/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 18:25:14 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 18:35:50 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

typedef struct	st_permissions
{
	unsigned int	read : 1;
	unsigned int	write : 1;
	unsigned int	excute : 1;
}	st_per;

int	main(void)
{
	st_per	pr;

	pr.read = 1;
	pr.write = 0;
	pr.excute = 1;

	printf("File Permissions:\n");
	printf("Read : %d\n",pr.read);
	printf("Write : %d\n",pr.write);
	printf("Excute : %d\n\n",pr.excute);

	printf("Size of Permission structer : %ld bytes\n",sizeof(pr));
	return (0);
}
