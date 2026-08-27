/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/27 18:28:44 by shobeedev // learn the why,              */
/*   Updated: 2026/08/27 19:52:39 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

void ft_list_merge(t_list **head1, t_list *head2)
{
	t_list	*ptr;

	if (*head1 == NULL)
	{
		*head1 = head2;
		return ;
	}
	if (head2 == NULL)
		return ;
	ptr = *head1;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = head2;
}

void	ft_push_back(t_list **head, void *data)
{
	t_list	*ptr;
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	tmp->data = data;
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

void	print_lst(t_list *head)
{
	t_list	*ptr;

	ptr = head;
	if (!ptr)
	{
		printf("empty list!!\n");
		return ;
	}
	while (ptr != NULL)
	{
		printf("%d ", *(int *)ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

void	free_lst(t_list **bg_list)
{
	t_list	*next;
	t_list	*head;

	head = *bg_list;
	while (head)
	{
		next = head->next;
		free(head->data);
		free(head);
		head = next;
	}
}

int		main(void)
{
	srand((unsigned)time(NULL));
	t_list *head1;
	t_list *head2;
	int		*data;
	int		i;
	int		size;

	head1 = NULL;
	head2 = NULL;
	data = NULL;
	
	i = 0;
	size = rand() % (10 + 1);
	while (i < size)
	{
		data = malloc(sizeof(int));
		*data = rand() % (100 + 1);
		ft_push_back(&head1, data);
		i++;
	}
	
	i = 0;
	size = rand() % (10 + 1);
	while (i < size)
	{
		data = malloc(sizeof(int));
		*data = rand() % (100 + 1);
		ft_push_back(&head2, data);
		i++;
	}

	printf("list 1: \n");
	print_lst(head1);
	printf("list 2: \n");
	print_lst(head2);
	
	ft_list_merge(&head1, head2);
	printf("The list 1 after merging with list 2 : \n");
	print_lst(head1);

	free_lst(&head1);
	return (0);
}
