/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 13:14:57 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/22 16:26:57 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	to get the last node of linked list
**	1. do loop similar with list size
**	2. condition to break loop just put extra ahead instead of current 
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int	main(void)
{
	t_list	*node;

	// TEST CASE 1 (null)
	node = NULL;
	printf("Test case 1:- %s", (char *)ft_lstlast(node));
	printf("\n");

	// TEST CASE 2
	node = ft_lstnew("A");
	node->next = ft_lstnew("B");
	node->next->next = ft_lstnew("C");
	printf("Test case 1:- %s", (char *)ft_lstlast(node)->content);
	printf("\n");

	// TEST CASE 3
	node = ft_lstnew("I");
	node->next = ft_lstnew("am");
	node->next->next = ft_lstnew("42Malaysia");
	printf("Test case 2:- %s", (char *)ft_lstlast(node)->content);
	printf("\n");
}*/