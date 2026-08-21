/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/21 09:30:37 by shobeedev // learn the why,              */
/*   Updated: 2026/08/21 10:55:01 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include"list.h"

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
		printf("The list is empty!\n");
		return ;
	}
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
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

node	*merge_lst(node *l1, node *l2)
{
	node	*head;
	node	*next1;
	node	*next2;

	if (!l1)
		return (l2);
	if (!l2)
		return (l1);
	if (l1->next == NULL)
	{
		l1->next = l2;
		return (l1);
	}
	head = l1;
	while (l1 != NULL && l2 != NULL)
	{
		next1 = l1->next;
		l1->next = l2;

		next2 = l2->next;
		l2->next = next1;

		l1 = next1;
		l2 = next2;
	}
	return (head);
}

int		main(void)
{
	node	*l1;
	node	*l2;
	node	*head;

	l1 = NULL;
	l2 = NULL;
	head = NULL;
	
	//list 1 :
	insert_node(&l1, 1);
	insert_node(&l1, 3);
	insert_node(&l1, 5);
	insert_node(&l1, 7);
	insert_node(&l1, 9);
	print_lst(l1);

	//list 2 :
	insert_node(&l2, 2);
	insert_node(&l2, 4);
	insert_node(&l2, 6);
	insert_node(&l2, 8);
	print_lst(l2);

	head = merge_lst(l1, l2);
	print_lst(head);
	head = free_lst(head);
}
