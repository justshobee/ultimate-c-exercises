/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/26 12:10:06 by shobeedev // learn the why,              */
/*   Updated: 2026/08/26 12:18:24 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

t_list *ft_create_elem(void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = NULL;

	return (tmp);
}

int		main(void)
{
	t_list	*head;
	int		*data;

	data = malloc(sizeof(int));
	*data = 1337;
	head = ft_create_elem(data);
	printf("%d | %p\n", *(int*)head->data, head->next);
	free(data);
	data = NULL;
	free(head);
	head = NULL;
	return (0);
}
