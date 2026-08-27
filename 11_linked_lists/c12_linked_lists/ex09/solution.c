/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/27 12:14:58 by shobeedev // learn the why,              */
/*   Updated: 2026/08/27 12:43:13 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "list.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(void *str)
{
	while (*(char *)str)
		ft_putchar(*(char *)str++);
	ft_putchar('\n');
}


void ft_list_foreach(t_list *head, void (*f)(void *))
{
	if (!head)
		return ;
	while (head != NULL)
	{
		f(head->data);
		head = head->next;
	}
}

void	ft_push_beg(t_list **head, void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = *head;
	*head = tmp;
}

int		main(int size, char **str)
{
	if (size > 1)
	{
		t_list	*head;
		t_list	*next;
		int		i;

		head = NULL;
		i = 1;
		while (i < size)
		{
			ft_push_beg(&head, str[i]);
			i++;
		}
		ft_list_foreach(head, ft_putstr);
		while (head != NULL)
		{
			next = head->next;
			free(head);
			head= next;
		}
		head = NULL;
	}
}
