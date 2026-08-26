/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/26 19:25:03 by shobeedev // learn the why,              */
/*   Updated: 2026/08/26 20:05:21 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		i;

	if (!begin_list)
		return (NULL);
	i = 0;
	while (i < nbr)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (begin_list);
}

void	free_data(void *data)
{
	free(data);
	data = NULL;
}

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*ptr;

	while (begin_list != NULL)
	{
		ptr = begin_list->next;
		free_fct(begin_list->data);
		free(begin_list);
		begin_list = ptr;
	}
	begin_list = NULL;
}

void	ft_push_beg(t_list **head, void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = *head;
	*head =tmp;
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
		data = NULL;
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
			printf("%d ", *(int *)ptr->data);
			ptr = ptr->next;
		}
		printf("\nths list 2 : %d\n", *(int* )ft_list_at(head, 1)->data);
		ft_list_clear(head, free_data);
	}
	return (0);
}

