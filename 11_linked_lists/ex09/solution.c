/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/19 18:49:02 by shobeedev // learn the why,              */
/*   Updated: 2026/08/19 19:48:24 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	insert_node(node **head, int data)
{
	node	*tmp;

	tmp = malloc(sizeof(node));
	tmp->data = data;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return ;
	}
	tmp->next = *head;
	*head = tmp;
}

void	free_last_node(node **head)
{
	node	*ptr;

	ptr = *head;
	if (ptr->next == NULL)
	{
		free(ptr);
		*head = NULL;
		return ;
	}
	while (ptr->next->next != NULL)
		ptr = ptr->next;
	free(ptr->next);
	ptr->next = NULL;
}

node	*free_lst(node *head)
{
	node	*next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
	head = NULL;
	return (head);
}

void	print_lst(node *head)
{
	if (!head)
	{
		printf("The list is empty!\n");
		return ;
	}
	while (head != NULL)
	{
		printf("%d | %p\n", head->data, head->next);
		head = head->next;
	}
	printf("\n");
}

int		main(int size, char **str)
{
	if (size > 1)
	{
		node	*head;
		int		i;

		i = 1;
		head = NULL;
		while (i < size)
		{
			insert_node(&head, atoi(str[i]));
			i++;
		}
		print_lst(head);
		free_last_node(&head);
		print_lst(head);
		head = free_lst(head);
	}
}
