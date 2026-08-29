/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/28 17:05:39 by shobeedev // learn the why,              */
/*   Updated: 2026/08/29 10:53:42 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include "list.h"

int		ft_strcmp(void *s1, void *s2)
{
	int		i;

	i = 0;
	while (((char*)s1)[i] == ((char*)s2)[i] && ((char*)s1)[i])
		i++;
	return (((char*)s1)[i] - ((char*)s2)[i]);
}

int		ft_nbrcmp(void *a, void *b)
{
	return (*(int*)a - (*(int*)b));
}

void ft_sorted_list_merge(t_list **head1, t_list *head2, int (*cmp)(void*, void*))
{
	t_list	dummy;
	t_list	*tail;
	t_list	*h1;

	tail = &dummy;
	h1 = *head1;
	while (h1 && head2)
	{
		if (cmp(h1->data, head2->data) > 0)
		{
			tail->next = head2;
			head2 = head2->next;
		}
		else
		{
			tail->next = h1;
			h1 = h1->next;
		}
		tail = tail->next;
	}
	if (h1 == NULL)
		tail->next = head2;
	else
		tail->next = h1;
	*head1 = dummy.next;
}

int		count_list(t_list *head)
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

void	bubble_sort(void *arr[], int size, int (*cmp) (void*, void*))
{
	void	*tmp;
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (cmp(arr[j], arr[j + 1]) > 0)
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void ft_list_sort(t_list **head, int (*cmp)(void*, void*))
{
	t_list	*ptr;
	int		size;
	int		i;
	void	*arr[count_list(*head)];

	if (*head == NULL)
		return ;
	ptr = *head;
	size = count_list(*head);
	i = 0;
	while (i < size)
	{
		arr[i] = ptr->data;
		ptr = ptr->next;
		i++;
	}
	bubble_sort(arr, size, cmp);
	i = 0;
	ptr = *head;
	while (ptr)
	{
		ptr->data = arr[i];
		ptr = ptr->next;
		i++;
	}
}


void push_front(t_list **head,void* data)
{
	t_list	*tmp;
	t_list	*ptr;

	tmp = malloc(sizeof(t_list));
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

void	print_lst(t_list *head, char type)
{
	if (!head)
	{
		printf("empty list!!\n");
		return ;
	}
	while (head)
	{
		if (type == 'i')
			printf("%d ", *(int *)head->data);
		else if (type == 'c')
			printf("%c ", *(char *)head->data);
		else
			printf("%s\n", (char *)head->data);
		head = head->next;
	}
	printf("\n");
}

void	free_lst(t_list *head, int free_data)
{
	t_list	*next;

	while (head)
	{
		next = head->next;
		if (free_data)
			free(head->data);
		free(head);
		head = next;
	}
}

void	test_int()
{
	srand((unsigned)time(NULL));
	t_list	*head1;
	t_list	*head2;
	int		*data;
	int		size;
	int		i;

	head1 = NULL;
	head2 = NULL;
	data = NULL;
	size = rand() % (10 + 1);
	i = 0;
	while (i < size)
	{
		data = malloc(sizeof(int));
		*data = rand() % (CHAR_MAX + 1);
		push_front(&head1, data);
		i++;
	}
	size = rand() % (10 + 1);
	i = 0;
	while (i < size)
	{
		data = malloc(sizeof(int));
		*data = rand() % (CHAR_MAX + 1);
		push_front(&head2, data);
		i++;
	}
	ft_list_sort(&head1, ft_nbrcmp);
	print_lst(head1, 'i');
	ft_list_sort(&head2, ft_nbrcmp);
	print_lst(head2, 'i');
	ft_sorted_list_merge(&head1, head2, ft_nbrcmp);
	print_lst(head1, 'i');
	free_lst(head1, 1);
}

int		main(void)
{
	test_int();
	return (0);
}

