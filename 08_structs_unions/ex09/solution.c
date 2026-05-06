/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/05/06 09:13:45 by shobeedev               shobee4ever      */
/*   Updated: 2026/05/06 09:29:41 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct st_node
{
	int		data;
	struct st_node		*next;
}	st_node;

int	main(void)
{
	st_node	n1;
	st_node	n2;

	n1.data = 1337;
	n1.next = &n2;

	n2.data = 42;
	n2.next = NULL;

	printf("Node 1 data : %d\n",n1.data);
	printf("Node 2 data (via n1 pointer) : %d\n",n1.next->data);
	return (0);
}
