/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/22 08:58:38 by shobeedev // learn the why,              */
/*   Updated: 2026/08/22 08:58:41 by shobeedev // not only the how.           */
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

	tmp = malloc(sizeof(node));
	if (!tmp)
	{
		printf("failed to allocate memory!\n");
		return ;
	}
	tmp->data = data;
	tmp->next = NULL;
	if (!(*head))
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

	if (!head)
	{
		printf("The list is empty.\n");
		return ;
	}
	ptr = head;
	while (ptr != NULL)
	{
		printf("Data = %d | nextAdd = %p\n",ptr->data, ptr->next);
		ptr = ptr->next;
	}
}

node	*reverse_lst(node *head)
{
	node	*next;
	node	*prev;

	if (!head)
		return (NULL);
	next = NULL;
	prev = NULL;
	while (head != NULL)
	{
		next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}
	head = prev;
	return (head);
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

		head = NULL;
		i = 1;
		while (i < size)
		{
			insert_node(&head, atoi(str[i]));
			i++;
		}
		printf("Data entered in the list are : \n");
		print_lst(head);
		head = reverse_lst(head);
		printf("\nThe list in reverse are :  \n");
		print_lst(head);
		head = free_node(head);
	}
}
