/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/03/14 12:38:24 by shobeedev               shobee4ever      */
/*   Updated: 2026/03/14 12:45:03 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct stpoit
{
	int x;
	int y;
};

void print_point(struct stpoit p)
{
	printf("Inside function: Point coordinates are: (%d,%d)\n",p.x,p.y);

	p.y = 13;
}

int main()
{
	struct stpoit p;

	p.x = 42;
	p.y = 1337;

	printf("In main: Before function call, y=%d\n",p.y);
	print_point(p);
	printf("In main: After function call, y=%d (original is unchanged)\n",p.y);

	return 0;
}
