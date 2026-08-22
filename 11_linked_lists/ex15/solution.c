/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/22 11:04:45 by shobeedev // learn the why,              */
/*   Updated: 2026/08/22 19:15:32 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	insert_node(node **head, int data)
{
	node	*ptr;
	node	*tmp;
	int		*value;

	tmp = malloc(sizeof(node));
	value = malloc(sizeof(int));
	*value = data;
	tmp->data = value;;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return ;
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = tmp;
}

void	print_lst(node *head, char type)
{
	if (!head)
	{
		printf("The list is empty!\n");
		return ;
	}
	while (head)
	{
		if (type == 'i')
			printf("%d ", *(int *)head->data);
		else
			printf("%c", *(char *)head->data);
		head = head->next;
	}
	printf("\n");
}

int		count_node(node *head)
{
	int		count;

	count = 0;
	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}

node	*get_index(node *head, int index)
{
	if (!head)
		return (head);
	while (index != 1)
	{
		index--;
		head = head->next;
	}
	return (head);
}

int		is_palindrome(node *head, int size, char type)
{
	int		index;
	node	*ptr;
	node	*tmp;

	if (!head)
		return (0);
	index = 1;
	tmp = head;
	while (index < size)
	{
		ptr = get_index(head, size);
		if ((type == 'i') && (*(int *)tmp->data != *(int *)ptr->data))
			return (0);
		else if ((type == 'c') && (*(char *)tmp->data != *(char *)ptr->data))
			return (0);
		tmp = tmp->next;
		index++;
		size--;
	}
	return (1);
}

node	*free_lst(node *head)
{
	node	*next;

	while (head)
	{
		next = head->next;
		free(head->data);
		free(head);
		head = next;
	}
	head = NULL;
	return (head);
}

int		main(void)
{
	node	*head;

	head = NULL;
	insert_node(&head, 'm');
	insert_node(&head, 'a');
	insert_node(&head, 'd');
	insert_node(&head, 'a');
	insert_node(&head, 'm');

	print_lst(head, 'c');
	if (is_palindrome(head, count_node(head), 'c'))
		printf("Linked list is a palindrome.\n");
	else
		printf("Linked list is not a palindrome.\n");
	head = free_lst(head);
	return (0);
}
