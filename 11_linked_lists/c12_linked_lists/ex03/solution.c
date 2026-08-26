/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/26 12:52:50 by shobeedev // learn the why,              */
/*   Updated: 2026/08/26 17:51:07 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	ft_push_beg(t_list	 **head, void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = *head;
	*head = tmp;
}

t_list *ft_list_last(t_list *begin_list)
{
	t_list	*ptr;

	if (!begin_list)
		return (begin_list);
	ptr = begin_list;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}

int		main(int size, char **str)
{
	if (size > 1)
	{
		t_list	*head;
		t_list	*ptr;
		int		*data;
		int		i;

		i = 1;
		while (i < size)
		{
			data = malloc(sizeof(int));
			*data = atoi(str[i]);
			ft_push_beg(&head, data);
			i++;
		}
		ptr = head;
		while (ptr != NULL)
		{
			printf("%d | %p\n",*(int *)ptr->data, ptr->next);
			ptr = ptr->next;
		}
		printf("\ntail = %d | %p\n",*(int*)ft_list_last(head)->data, ft_list_last(head)->next);
		while (head != NULL)
		{
			ptr = head->next;
			free(head->data);
			free(head);
			head = ptr;
		}
		head = NULL;
	}
	return (0);
}
