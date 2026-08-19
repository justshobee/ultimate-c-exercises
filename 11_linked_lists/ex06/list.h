/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   list.h                                                 |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/08/18 11:46:15 by shobeedev               shobee4ever      */
/*   Updated: 2026/08/18 11:48:04 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

struct st_node
{
	int		data;
	struct st_node	*next;
};

typedef struct st_node node;

#endif
