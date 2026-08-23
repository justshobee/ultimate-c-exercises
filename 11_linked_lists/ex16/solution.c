/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/23 09:57:47 by shobeedev // learn the why,              */
/*   Updated: 2026/08/23 10:52:18 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	insert_node(node **head, int data)
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
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = tmp;
}

void	print_lst(node *head)
{
	node	*ptr;

	ptr = head;
	if (!ptr)
	{
		printf("The list is empty!!\n");
		return ;
	}
	while (ptr != NULL)
	{
		printf("%d | %p\n", ptr->data, ptr->next);
		ptr = ptr->next;
	}
	printf("\n");
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

int		is_dup_node(node *head, node *data)
{
	while (head != data)
	{
		if (head->data == data->data)
			return (1);
		head = head->next;
	}
	return (0);
}

node	*remove_dup_node(node *head, int size)
{
	node	*ptr;
	node	*prev;
	node	*next;
	int		i;

	if (!head)
		return (head);
	if (head->next == NULL)
		return (head);
	ptr = head;
	prev = NULL;
	next = ptr->next;
	i = 0;
	while (i < size)
	{
		if (i > 0 && is_dup_node(head, ptr))
		{
			next = ptr->next;
			free(ptr);
			prev->next = next;
			ptr = prev;
			size--;
			i--;
		}
		prev = ptr;
		ptr = ptr->next;
		i++;
	}
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
		printf("Original Singly List:\n");
		print_lst(head);
		head = remove_dup_node(head, size - 1);
		printf("After removing duplicate elements from the said singly list:\n");
		print_lst(head);
		head = free_lst(head);
	}
}

