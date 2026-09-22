/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 14:41:27 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/22 16:26:57 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	to add on back of linked list without affect the existing one
**	1. check whole list is NULL
**	2. check one of it if NULL then set current list with the new one
**	3. use ft_lstlast to get the last one
**	4. add new last one last->next 
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int	main(void)
{
	t_list	*root;
	t_list	*tmp;

	root = ft_lstnew("42kl");
	root->next = ft_lstnew("42penang");
	root->next->next = ft_lstnew("42malaysia");

	// TEST CASE 1
	tmp = root;
	printf("Example\n");
	while (tmp)
	{
		printf(":- %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	tmp = root;
	printf("Test Case 1\n");
	ft_lstadd_back(&tmp, ft_lstnew("42johor"));
	while (tmp)
	{
		printf(":- %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n---------------------------------\n");

	// TEST CASE 2 (null)
	tmp = NULL;
	printf("Example\n");
	printf(":- %s\n", (char *)tmp);

	printf("Test Case 2\n");
	ft_lstadd_back(&tmp, ft_lstnew("NULL"));
	printf(":- %s\n", (char *)tmp->content);
	printf("\n---------------------------------\n");

	// TEST CASE 3 (totally null)
	// need to delete if for to see comparison
	printf("Test Case 3 with complete NULL\n");
	ft_lstadd_back(NULL, ft_lstnew("NULL"));
	printf("no crash\n");
}*/