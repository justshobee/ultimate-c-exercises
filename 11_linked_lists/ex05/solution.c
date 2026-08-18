#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	insert_at_end(node **head, int data)
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
		printf("The list is not empty\n");
		return ;
	}
	while (ptr != NULL)
	{
		printf("%d | %p\n", ptr->data, ptr->next);
		ptr = ptr->next;
	}
}

node	*free_lst(node *head)
{
	node	*next;

	next = NULL;
	while (head != NULL)
	{
		next= head->next;
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
			insert_at_end(&head, atoi(str[i]));
			i++;
		}
		print_lst(head);
		head = free_lst(head);
	}
}

