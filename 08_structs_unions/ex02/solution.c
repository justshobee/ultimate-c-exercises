/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/05 18:55:09 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/05 19:07:52 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	st_book
{
	char	*title;
	char	*author;
	int		pages;
	float	price;
} st_book;

int	main(void)
{
	st_book	book;

	book.title = "Atomic habbits";
	book.author = "Unknown";
	book.pages = 256;
	book.price = 15;

	printf("--- Book Details ---\n");
	printf("Title : %s\n",book.title);
	printf("Author : %s\n",book.author);
	printf("Pages : %d\n",book.pages);
	printf("Price : %.2f$\n",book.price);
	return (0);
}
