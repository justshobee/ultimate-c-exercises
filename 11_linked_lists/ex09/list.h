/* ************************************************************************** */
/*                                                                            */
/*   list.h                                    // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/22 09:01:06 by shobeedev // learn the why,              */
/*   Updated: 2026/08/22 09:01:07 by shobeedev // not only the how.           */
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
