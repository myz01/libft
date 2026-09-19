/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:29:41 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/19 19:21:29 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	To add infront of linked list
	1. compare if it is NULL or not
	2. fill new->next with previous node
	3. simply put latest new to latest list to replace*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int	main(void)
{
	t_list	*newnode;
	t_list	*node;
	t_list	*current;

	node = ft_lstnew("A ");
	node->next = ft_lstnew("B ");
	node->next->next = ft_lstnew("C ");
	current = node;

	printf("\nNormal linked list:- ");
	while (current)
	{
		printf((char *)current->content);
		current = current->next;
	}

	// TEST CASE 1
	printf("\nAdd front on Linked list:- ");
	newnode = ft_lstnew("Z ");
	ft_lstadd_front(&node, newnode);
	current = node;

	while (current)
	{
		printf((char *)current->content);
		current = current->next;
	}

	// freeing
	while (node)
	{
		current = node;
		node = node->next;
		free(current);
	}
}*/