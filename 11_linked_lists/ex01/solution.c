/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   solution.c                                             |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://github.com/justshobee>           / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2026/08/18 10:27:55 by shobeedev               shobee4ever      */
/*   Updated: 2026/08/18 10:58:35 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct	st_node
{
	int		data;
	struct st_node	*next;
}	node;

void	insert_node(node **head, int data)
{
	node	*ptr;
	node	*tmp;

	ptr = (node *)malloc(sizeof(node));
	ptr->data = data;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return ;
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = ptr;
}

void	print_lst(node *head)
{
	if (!head)
	{
		printf("The List is empty!\n");
		return ;
	}
	while (head != NULL)
	{
		printf("Data = %d | nextAdd = %p\n",head->data, head->next);
		head = head->next;
	}
}

node	*free_node(node *head)
{
	node	*next;
	if (!head)
		return (NULL);
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

		i = 1;
		head = NULL;
		while (i < size)
		{
			insert_node(&head, atoi(str[i]));
			i++;
		}
		print_lst(head);
		head = free_node(head);
	}
}
