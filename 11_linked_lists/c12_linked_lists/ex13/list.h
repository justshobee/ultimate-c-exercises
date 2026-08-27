/* ************************************************************************** */
/*                                                                            */
/*   list.h                                    // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/26 12:07:05 by shobeedev // learn the why,              */
/*   Updated: 2026/08/26 12:17:31 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

struct	s_list
{
	void*	data;
	struct s_list*	next;
};

typedef struct s_list t_list;

#endif

