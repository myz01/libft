/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:29:41 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/21 00:05:53 by muhabin3         ###   ########.fr       */
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
	t_list	*add;
	t_list	*root;
	t_list	*tmp;

	root = ft_lstnew("A ");
	root->next = ft_lstnew("B ");
	root->next->next = ft_lstnew("C ");
	tmp = root;

	printf("\nNormal linked list:- ");
	while (tmp)
	{
		printf((char *)tmp->content);
		tmp = tmp->next;
	}

	// TEST CASE 1
	printf("\nAdd front on Linked list:- ");
	tmp = root;
	add = ft_lstnew("Z ");
	ft_lstadd_front(&tmp, add);

	while (tmp)
	{
		printf((char *)tmp->content);
		tmp = tmp->next;
	}

	// freeing
	while (root)
	{
		tmp = root;
		root = root->next;
		free(tmp);
	}
	free(add);
}*/