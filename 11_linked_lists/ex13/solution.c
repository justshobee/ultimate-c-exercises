/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/21 09:30:37 by shobeedev // learn the why,              */
/*   Updated: 2026/08/21 11:58:34 by shobeedev // not only the how.           */
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

node	*merge_lst(node *head1, node *head2)
{
	node	dummy;//to store first node
	node	*tail;//to know the last node

	if (!head1)
		return (head2);
	if (!head2)
		return (head1);
	tail = &dummy;
	while (head1 && head2)
	{
		if (head1->data < head2->data)
		{
			tail->next = head1;
			head1 = head1->next;
		}
		else
		{
			tail->next = head2;
			head2 = head2->next;
		}
		tail = tail->next;
	}
	if (head1 != NULL)
		tail->next = head1;
	else
		tail->next = head2;
	return (dummy->next);
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
	insert_node(&l1, 2);
	insert_node(&l1, 5);
	insert_node(&l1, 6);
	insert_node(&l1, 10);
	print_lst(l1);

	//list 2 :
	insert_node(&l2, 0);
	insert_node(&l2, 3);
	insert_node(&l2, 4);
	insert_node(&l2, 8);
	print_lst(l2);

	head = merge_lst(l1, l2);
	print_lst(head);
	head = free_lst(head);
}
