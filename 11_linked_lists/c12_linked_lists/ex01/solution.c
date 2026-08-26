/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/26 12:22:23 by shobeedev // learn the why,              */
/*   Updated: 2026/08/26 12:32:56 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = *begin_list;
	
	*begin_list = tmp;
}

int		main(void)
{
	t_list	*head;
	t_list	*ptr;
	t_list	*next;
	int		*data;

	head = NULL;
	data = malloc(sizeof(t_list));
	*data = 42;
	ft_list_push_front(&head, data);
	
	data = malloc(sizeof(t_list));
	*data = 13;
	ft_list_push_front(&head, data);
	
	data = malloc(sizeof(t_list));
	*data = 37;
	ft_list_push_front(&head, data);
	
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d | %p\n", *(int*)ptr->data, ptr->next);
		ptr = ptr->next;
	}
	
	while (head != NULL)
	{
		next = head->next;
		free(head->data);
		free(head);
		head = next;
	}
	head = NULL;
	return (0);
}
