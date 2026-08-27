/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/27 13:08:51 by shobeedev // learn the why,              */
/*   Updated: 2026/08/27 16:05:46 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "list.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

void	ft_putstr(void *str)
{
	while (*(char*)str)
		ft_putchar(to_upper((*(char*)str++)));
	ft_putchar('\n');
}

int		ft_strcmp(void *s1, void *s2)
{
	while (*(char*)s1 == *(char*)s2 && *(char*)s1)
	{
		s1++;
		s2++;
	}
	return (*(char*)s1 - (*(char*)s2));
}

void	ft_list_foreach_if(t_list *head, void (*f)(void *), void *data_ref, int (*cmp)(void *, void *))
{
	while (head)
	{
		if (cmp(head->data, data_ref) == 0)
			f(head->data);
		head = head->next;
	}
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
		int		i;

		head = NULL;
		next = NULL;
		i = 0;
		while (i < size)
		{
			ft_push_front(&head, str[i]);
			i++;
		}
		ft_list_foreach_if(head, ft_putstr, "test", ft_strcmp);
		while (head != NULL)
		{
			next = head->next;
			free(head);
			head = next;
		}
	}
}
