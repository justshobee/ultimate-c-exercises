/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/26 17:53:18 by shobeedev // learn the why,              */
/*   Updated: 2026/08/26 18:04:53 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = NULL;

	return (tmp);
}

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ptr;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	ptr = *begin_list;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = ft_create_elem(data);
}

int		main(int size, char **str)
{
	if (size > 1)
	{
		t_list	*head;
		t_list	*ptr;
		int		*data;
		int		i;

		head = NULL;
		ptr = NULL;
		data = NULL;
		i = 1;
		while (i < size)
		{
			data = malloc(sizeof(int));
			*data = atoi(str[i]);
			ft_list_push_back(&head, data);
			i++;
		}
		ptr = head;
		while (ptr != NULL)
		{
			printf("%d | %p\n", *(int*)ptr->data, ptr->next);
			ptr = ptr->next;
		}
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
