/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/08/20 10:50:40 by shobeedev // learn the why,              */
/*   Updated: 2026/08/20 11:53:22 by shobeedev // not only the how.           */
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
	if (!ptr)
	{
		printf("The list is empty!\n");
		return ;
	}
	while (ptr != NULL)
	{
		printf("%d | %p\n",ptr->data, ptr->next);
		ptr = ptr->next;
	}
	printf("\n");
}

int		count_node(node *head)
{
	node	*ptr;
	int		count;

	ptr = head;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

int		len_nbr(int nbr)
{
	long	n;
	int		len;

	n = nbr;
	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	long	div;
	long	n;
	int		i;

	str = malloc(sizeof(char) * (len_nbr(nbr) + 1));
	if (!str)
		return (NULL);
	i = 0;
	n = nbr;
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	div = 1;
	while (div <= (n / 10))
		div = div * 10;
	while (div > 0)
	{
		str[i++] = (n / div) + '0';
		n = n % div;
		div = div / 10;
	}
	str[i] = '\0';
	return (str);
}

int		total_len(node *head, int nNodes)
{
	int		len;
	node	*ptr;
	len = nNodes - 1;
	ptr = head;
	while (ptr != NULL)
	{
		len += len_nbr(ptr->data);
		ptr = ptr->next;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src, int *index)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	*index += i;
	return (dest);
}

char	*lst_to_str(node *head, int nNodes)
{
	char	*str;
	char	*s;
	int		len;
	int		i;

	str = NULL;
	len = total_len(head, nNodes);
	str = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (nNodes > 0)
	{
		s = ft_itoa(head->data);
		if (!s)
			return (NULL);
		ft_strcpy(str + i, s, &i);
		if (nNodes != 1)
			str[i++] = ' ';
		free(s);
		s = NULL;
		head = head->next;
		nNodes--;
	}
	return (str);
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

int		main(int size, char **strs)
{
	if (size > 1)
	{
		node	*head;
		char	*str;
		int		i;

		head = NULL;
		i = 1;
		while (i < size)
		{
			insert_node(&head, atoi(strs[i]));
			i++;
		}
		print_lst(head);
		str = lst_to_str(head, count_node(head));
		printf("The list as string : \"%s\"\n", str);
		head = free_lst(head);
		free(str);
		str = NULL;
	}
}


