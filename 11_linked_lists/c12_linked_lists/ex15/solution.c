/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/28 12:08:35 by shobeedev // learn the why,              */
/*   Updated: 2026/08/28 12:44:22 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include "list.h"

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

void	swap(void **a, void **b)
{
	void	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	reverse_arr(void *arr[], int size)
{
	int		start;
	int		end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		swap(&arr[start], &arr[end]);
		start++;
		end--;
	}
}

void ft_list_reverse_fun(t_list *head)
{
	t_list	*ptr;
	void	*arr[count_list(head)];
	int		i;
	int		size;

	if (!head)
		return ;
	ptr = head;
	i = 0;
	size = count_list(ptr);
	while (i < size)
	{
		arr[i] = ptr->data;
		ptr = ptr->next;
		i++;
	}
	reverse_arr(arr, size);
	i = 0;
	ptr = head;
	while (i < size)
	{
		ptr->data = arr[i];
		ptr = ptr->next;
		i++;
	}
}

void	push_front(t_list **head, void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = *head;
	*head = tmp;
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
	t_list	*head;
	int		*data;
	int		size;
	int		i;

	head = NULL;
	data = NULL;
	size = rand() % (10 + 1);
	i = 0;
	while (i < size)
	{
		data = malloc(sizeof(int));
		//range (end - start + 1) + start
		*data = rand() % (CHAR_MAX + 1);
		//*data = rand() % INT_MAX;
		push_front(&head, data);
		i++;
	}
	print_lst(head, 'i');
	ft_list_reverse_fun(head);
	print_lst(head, 'i');
	free_lst(head, 1);
}

void	test_str(int size, char **str)
{
	t_list	*head;
	int		i;

	i = 0;
	head = NULL;
	while (i < size)
	{
		push_front(&head, str[i]);
		i++;
	}
	print_lst(head, 's');
	ft_list_reverse_fun(head);
	print_lst(head, 's');
	free_lst(head, 0);
}

int		main(int size, char **str)
{
	if (size > 1)
		test_str(size - 1, str + 1);
	else
		test_int();
	return (0);
}

