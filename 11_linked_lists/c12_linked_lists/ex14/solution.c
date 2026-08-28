/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/28 10:08:05 by shobeedev // learn the why,              */
/*   Updated: 2026/08/28 11:25:49 by shobeedev // not only the how.           */
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

int		ft_strcmp(void *s1, void *s2)
{
	while (*(char *)s1 == *(char *)s2 && *(char *)s1)
	{
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}

int		ft_ncmp(void *a, void *b)
{
	return (*(int *)a - (*(int *)b));
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
	ft_list_sort(&head, ft_ncmp);
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
	ft_list_sort(&head, ft_strcmp);
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
