/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/26 18:07:07 by shobeedev // learn the why,              */
/*   Updated: 2026/08/26 18:46:53 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	ft_push_beg(t_list **head, void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = *head;
	*head = tmp;
}

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list	*head;
	int		i;

	head = NULL;
	i = 0;
	while (i < size)
	{
		ft_push_beg(&head, strs[i]);
		i++;
	}
	return (head);
}

int		main(int size, char **str)
{
	if (size > 1)
	{
		t_list	*head;
		t_list	*ptr;

		head = ft_list_push_strs(size - 1, str + 1);
		
		ptr = head;
		while (ptr != NULL)
		{
			printf("%s | %p\n", (char *)ptr->data, ptr->next);
			ptr = ptr->next;
		}

		while (head != NULL)
		{
			ptr = head->next;
			free(head);
			head = ptr;
		}
		head = NULL;
	}
	return (0);
}
