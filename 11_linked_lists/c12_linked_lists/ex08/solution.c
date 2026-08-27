/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/27 11:03:01 by shobeedev // learn the why,              */
/*   Updated: 2026/08/27 12:12:56 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void ft_list_reverse(t_list **head)
{
	t_list	*prev;
	t_list	*next;
	t_list	*ptr;

	prev = NULL;
	next = NULL;
	ptr = *head;
	while (ptr != NULL)
	{
		next = ptr->next;
		ptr->next = prev;
		prev = ptr;
		ptr = next;
	}
	*head = prev;
}

void	ft_push_front(t_list **head, void *data)
{
	t_list	*tmp;
	t_list	*ptr;

	tmp = malloc(sizeof(t_list));
	tmp->data= data;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return ;
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = tmp;
}

void	ft_dis_list(t_list *head)
{
	if (!head)
		return ;
	while (head != NULL)
	{
		printf("%d ", *(int*)head->data);
		head = head->next;
	}
	printf("\n");
}

void	ft_free_list(t_list *head)
{
	t_list	*next;

	while (head != NULL)
	{
		next = head->next;
		free(head->data);
		free(head);
		head = next;
	}
	head = NULL;
}

int		main(int size, char **str)
{
	if (size > 1)
	{
		t_list	*head;
		int		*data;
		int		i;

		head = NULL;
		data = NULL;
		i = 1;
		while (i < size)
		{
			data = malloc(sizeof(int));
			*data = atoi(str[i]);
			ft_push_front(&head, data);
			i++;
		}
		printf("Original list : \n");
		ft_dis_list(head);
		
		printf("Reversed list : \n");
		ft_list_reverse(&head);
		ft_dis_list(head);
		
		ft_free_list(head);
	}
}
