/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/20 09:51:42 by shobeedev // learn the why,              */
/*   Updated: 2026/08/20 10:39:13 by shobeedev // not only the how.           */
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
	if (!head)
	{
		printf("The list is empty!\n");
		return ;
	}
	while (head != NULL)
	{
		printf("%d | %p\n",head->data, head->next);
		head = head->next;
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

int		find_node(node *head, int element)
{
	int		index;

	index = 1;
	while (head != NULL)
	{
		if (head->data == element)
			return (index);
		index++;
		head = head->next;
	}
	return (-1);
}

int		main(int size, char **str)
{
	if (size > 2)
	{
		node	*head;
		int		i;

		head = NULL;
		i = 2;
		while (i < size)
		{
			insert_node(&head, atoi(str[i]));
			i++;
		}
		print_lst(head);
		int index = find_node(head, atoi(str[1]));
		if (index != -1)
			printf("Element found at node %d.\n",index);
		else
			printf("Element not found at list.\n");
		head = free_lst(head);
	}
}
