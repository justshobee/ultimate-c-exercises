/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/09 10:14:11 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/09 11:07:44 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct stStudent
{
	int model_year;
	char color[20];
};

int main()
{
	struct stStudent s1;

	struct stStudent *s2 = &s1;

	printf("Enter Car Model Year: ");
	scanf("%d",&(*s2).model_year);
	printf("Enter Car Color: ");
	scanf("%s",&s2->color);

	printf("\n--- Car Details (via Pointer) ---\n");
	printf("Model year : %d\n",s2->model_year);
	printf("Color : %s\n",(*s2).color);

	return 0;
}
