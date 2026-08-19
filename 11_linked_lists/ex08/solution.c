/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/19 11:27:54 by shobeedev // learn the why,              */
/*   Updated: 2026/08/19 18:45:54 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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

	ptr = head;
	if (!ptr)
	{
		printf("the list is empty!\n");
		return ;
	}
	while (ptr != NULL)
	{
		printf("%d | %p\n",ptr->data, ptr->next);
		ptr = ptr->next;
	}
	printf("\n");
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
void	free_node(node **head, int pos)
{
	node	*prev;
	node	*next;

	if (pos < 1 || pos > count_node(*head))
		return ;
	prev = NULL;
	next = *head;
	if (pos == 1)
	{
		*head = next->next;
		free(next);
		next = NULL;
		return ;
	}
	while (pos != 1)
	{
		pos--;
		prev = next;
		next = prev->next;
	}
	prev->next = next->next;
	free(next);
	next = NULL;
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
		free_node(&head, 5);
		print_lst(head);
		head = free_lst(head);
	}
}
