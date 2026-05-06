/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 19:17:22 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 19:30:47 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	st_complexN
{
	float	real;
	float	imaginary;
}	st_complexn;

st_complexn	add_com(st_complexn n1, st_complexn n2)
{
	st_complexn n3;

	n3.real = n1.real + n2.real;
	n3.imaginary = n1.imaginary + n2.imaginary;

	return (n3);
}

void display_complex(st_complexn n)
{
    printf("%.2f + %.2fi", n.real, n.imaginary);
}

int	main(void)
{
	st_complexn n[2] = {{3.5, 2.0}, {1.4, 4.3}};
	st_complexn n3;

	n3 = add_com(n[0], n[1]);
    printf("C1 = "); display_complex(n[0]); printf("\n");
    printf("C2 = "); display_complex(n[1]); printf("\n");
    printf("Sum = "); display_complex(n3); printf("\n");
	return (0);
}
