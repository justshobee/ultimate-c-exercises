/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 11:47:21 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 11:56:49 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef enum	en_color
{RED, GREEN, BLUE}	en_clr;

typedef struct	st_product
{
	char	*name;
	float	price;
	en_clr	pr_color;
}	st_product;

int	main(void)
{
	st_product	pr;

	pr.name = "Mini Robot";
	pr.price = 250;
	pr.pr_color = BLUE;

	printf("--- Product Details ---\n");
	printf("Name : %s\n",pr.name);
	printf("Price : %.2f\n",pr.price);
	printf("Color (value) : %d\n",pr.pr_color);
	return (0);
}
