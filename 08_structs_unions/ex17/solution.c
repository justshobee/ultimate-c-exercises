/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 18:25:14 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 18:37:20 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>



/*Bit fields allow us to specify the exact width of a structure member in bits.
 * By setting each flag to : 1, we instruct the compiler to pack these three 
 * flags into the smallest possible memory container, typically an integer 
 * (4 bytes) or the smallest addressable unit (1 byte, if permitted).*/

/*While the total occupied memory is small (usually 4 bytes for alignment),
 * only 3 bits are used for actual data storage, drastically saving memory
 * when dealing with millions of such structures.*/

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
