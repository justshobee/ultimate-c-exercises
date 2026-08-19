/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/19 09:56:21 by shobeedev // learn the why,              */
/*   Updated: 2026/08/19 10:00:26 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	insert_node(node **head, int data)
{
	node	*ptr;
	node	*tmp;

	tmp = malloc(sizeof(node));
	tmp->data = data;
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

void	print_lst(node *head)
{
	node	*ptr;

	ptr =head;
	if (!ptr)
	{
		printf("The list is empty!!\n");
		return ;
	}
	while (ptr != NULL)
	{
		printf("%d | %p\n",ptr->data, ptr->next);
	
		ptr = ptr->next;
	}
}

void	insert_at_beg(node **head, int data)
{
	node	*tmp;

	tmp = malloc(sizeof(node));
	tmp->data = data;
	tmp->next = *head;
	*head = tmp;
}

node	*free_lst(node *head)
{
	node	*next;

	next = NULL;
	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
	head = NULL;
	return (head);
}

int		main(int size, char **str)
{
	if (size > 2)
	{
		node	*head;
		int		i;

		head = NULL;
		i = 1;
		while (i < size - 1)
		{
			insert_node(&head, atoi(str[i]));
			i++;
		}
		print_lst(head);
		printf("\n");
		insert_at_beg(&head, atoi(str[size - 1]));
		print_lst(head);
		head = free_lst(head);
	}
}

