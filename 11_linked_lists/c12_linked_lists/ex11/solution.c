/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/27 13:08:51 by shobeedev // learn the why,              */
/*   Updated: 2026/08/27 16:29:49 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int		ft_strcmp(void *s1, void *s2)
{
	while (*(char*)s1 == *(char*)s2 && *(char*)s1)
	{
		s1++;
		s2++;
	}
	return (*(char*)s1 - (*(char*)s2));
}

t_list*		ft_list_find(t_list *head,  void *data_ref, int (*cmp)(void *, void *))
{
	while (head)
	{
		if (cmp(head->data, data_ref) == 0)
			return (head);
		head = head->next;
	}
	return (NULL);
}

void	ft_push_front(t_list **head, void *data)
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

int		main(int size, char **str)
{
	if (size > 1)
	{
		t_list	*head;
		t_list	*next;
		t_list	*ptr;
		int		i;

		head = NULL;
		next = NULL;
		i = 0;
		while (i < size)
		{
			ft_push_front(&head, str[i]);
			i++;
		}
		ptr = ft_list_find(head, "test", ft_strcmp);
		if (ptr != NULL)
			printf("%s\n", (char *)ptr->data);
		else
			printf("NOT found!!\n");
		while (head != NULL)
		{
			next = head->next;
			free(head);
			head = next;
		}
	}
}
