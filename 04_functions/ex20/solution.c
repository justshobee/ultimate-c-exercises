/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/16 10:24:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/16 10:34:50 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct stcomplex
{
	float real;
	float img;
};

struct stcomplex add_complex(struct stcomplex c1,struct stcomplex c2)
{
	struct stcomplex comp;

	comp.real = c1.real + c2.real;
	comp.img = c1.img + c2.img;

	return comp;
}
void print_complex(struct stcomplex c) {
    printf("%.2f + %.2f\n", c.real, c.img);
}
int main()
{
	struct stcomplex comp1,comp2,res;

	comp1.real = 2026;
	comp1.img = 42;

	comp2.real = 4;
	comp2.img = 8;

    printf("comp1 = "); print_complex(comp1);
    printf("comp2 = "); print_complex(comp2);

	res = add_complex(comp1,comp2);

	printf("Real complex : %.2f\n",res.real);
	printf("Image complex : %.2f\n",res.img);

	return 0;

}
