/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/20 12:09:20 by shobeedev // learn the why,              */
/*   Updated: 2026/08/20 19:10:31 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	insert_node(node **head, int data)
{
	node	*tmp;
	
	tmp = malloc(sizeof(node));
	tmp->data = data;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return ;
	}
	tmp->next = *head;
	*head = tmp;
}

void	print_lst(node *head)
{
	node	*ptr;

	ptr = head;
	if (!head)
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

int		count_nodes(node *head)
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

int		*lst_to_arr(node *head, int nNodes)
{
	node	*ptr;
	int		*arr;
	int		i;

	ptr = head;
	arr = NULL;
	i = 0;
	arr = malloc(sizeof(int) * nNodes);
	if (!arr)
		return (NULL);
	while (i < nNodes)
	{
		arr[i] = ptr->data;
		i++;
		ptr = ptr->next;
	}
	return (arr);
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
		int		*arr;
		int		nNodes;
		int		i;

		head = NULL;
		i = 1;
		while (i < size)
		{
			insert_node(&head, atoi(str[i]));
			i++;
		}
		print_lst(head);
		nNodes = count_nodes(head);
		arr = lst_to_arr(head, nNodes);
		printf("The list as a string : \n");
		i = 0;
		while (i < nNodes)
		{
			printf("%d ", arr[i]);
			i++;
		}
		head = free_lst(head);
		free(arr);
		arr = NULL;
	}
}
