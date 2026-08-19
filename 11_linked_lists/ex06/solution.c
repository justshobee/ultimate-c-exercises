/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/19 10:03:22 by shobeedev // learn the why,              */
/*   Updated: 2026/08/19 10:45:38 by shobeedev // not only the how.           */
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

int		count_node(node *head)
{
	int		count;

	count = 0;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}

void	print_lst(node *head)
{
	node	*ptr;

	ptr = head;
	if (!head)
	{
		printf("The list is empty!\n");
		return ;
	}
	while (ptr != NULL)
	{
		printf("%d | %p\n", ptr->data, ptr->next);
		ptr = ptr->next;
	}
	printf("\n");
}

void	insert_at_mid(node **head, int data, int mid)
{
	node	*tmp;
	node	*ptr;

	tmp = malloc(sizeof(node));
	tmp->data = data;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return ;
	}
	ptr = *head;
	if (mid == 0)
	{
		ptr->next = tmp;
		return ;
	}
	while (mid != 1)
	{
		mid--;
		ptr = ptr->next;
	}
	tmp->next = ptr->next;
	ptr->next = tmp;
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

int		main(int size, char **str)
{
	if (size > 1)
	{
		node	*head;
		int		i;

		head = NULL;
		i = 1;
		while (i < size)
		{
			insert_node(&head, atoi(str[i]));
			i++;
		}
		print_lst(head);
		insert_at_mid(&head, 42, count_node(head)/2);
		print_lst(head);
		head = free_lst(head);
	}
}
