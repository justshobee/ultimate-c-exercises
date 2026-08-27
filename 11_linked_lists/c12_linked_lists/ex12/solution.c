/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/27 13:08:51 by shobeedev // learn the why,              */
/*   Updated: 2026/08/27 18:15:35 by shobeedev // not only the how.           */
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

void	free_data(void *data)
{
	free(data);
	data = NULL;
	return ;
}

void	ft_list_remove_if(t_list **head,  void *data_ref, int (*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list	*ptr;

	ptr = *head;
	while (ptr)
	{
		if (cmp(ptr->data, data_ref) == 0)
		{
			free_fct(ptr->data);
			ptr->data = NULL;
		}
		ptr = ptr->next;
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

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
void	print_list(t_list	*head)
{
	while (head != NULL)
	{
		if (head->data != NULL)
			printf("%s\n", (char *)head->data);
		head = head->next;
	}
	printf("\n");
}

int		main(int size, char **str)
{
	if (size > 1)
	{
		t_list	*head;
		t_list	*next;
		char	*s;
		int		i;

		head = NULL;
		next = NULL;
		s = NULL;
		i = 0;
		while (i < size)
		{
			s = malloc(sizeof(char) * (ft_strlen(str[i]) + 1 ));
			s = ft_strcpy(s, str[i]);
			ft_push_front(&head, s);
			i++;
		}
		print_list(head);
		ft_list_remove_if(&head, "test", ft_strcmp, free_data);
		print_list(head);
		while (head != NULL)
		{
			next = head->next;
			free(head);
			head = next;
		}
	}
}
