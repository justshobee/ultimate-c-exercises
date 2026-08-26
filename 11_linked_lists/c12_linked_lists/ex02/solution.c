/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/26 12:34:35 by shobeedev // learn the why,              */
/*   Updated: 2026/08/26 12:44:21 by shobeedev // not only the how.           */
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

int ft_list_size(t_list *begin_list)
{
	t_list	*ptr;
	int		count;

	ptr = begin_list;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

int		main(int size, char **str)
{
	if (size > 1)
	{
		t_list	*head;
		t_list	*next;
		int		*data;
		int		i;

		head = NULL;
		data = NULL;
		i = 1;
		while (i < size)
		{
			data = malloc(sizeof(int));
			*data = atoi(str[i]);
			ft_list_push_front(&head, data);
			i++;
		}
		printf("The number of node in list : %d\n",ft_list_size(head));
		while (head != NULL)
		{
			next = head->next;
			free(head->data);
			free(head);
			head = next;
		}
		head = NULL;
	}
	return (0);
}
