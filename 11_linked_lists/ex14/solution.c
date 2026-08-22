/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/22 10:03:56 by shobeedev // learn the why,              */
/*   Updated: 2026/08/22 10:58:57 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

node	*insert_node(node *head, int data)
{
	node	*tmp;
	node	*ptr;

	tmp = malloc(sizeof(node));
	tmp->data = data;
	tmp->next = NULL;
	if (!head)
	{
		head = tmp;
		return (head);
	}
	ptr = head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = tmp;
	return (head);
}

void	print_lst(node *head)
{
	node	*ptr;

	ptr = head;
	if (!ptr)
	{
		printf("The list is empty\n");
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
	node *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
	head = NULL;
	return (head);
}

int		psh(node **dummy, node *nod)
{
	node	*ptr;

	if (!nod)
		return (0);
	if (*dummy == NULL)
	{
		*dummy = nod;
		nod->next = NULL;
		return (1);
	}
	ptr = *dummy;
	while (ptr->next != NULL)
	{
		if (ptr == nod)
			return (0);
		ptr = ptr->next;
	}
	ptr->next = nod;
	nod->next = NULL;
	return (1);
}

node	*remove_loop_cycle(node *head)
{
	node	*dummy;
	node	*tmp;;
	
	dummy = NULL;
	tmp = head->next;
	while (psh(&dummy, head) && tmp)
	{
		head = tmp;
		tmp = tmp->next;
	}
	return (dummy);
}

int		main(void)
{
	node	*head;

	head = NULL;
	head = insert_node(head, 1);
	insert_node(head, 2);
	insert_node(head, 3);
	insert_node(head, 4);
	head->next->next->next->next = head->next->next->next;
	head = remove_loop_cycle(head);
	print_lst(head);
	head = free_lst(head);
}

