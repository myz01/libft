/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:15:34 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/22 11:32:30 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	identical with ft_lstdelone but will delete every nodes in linked list
**	1. check list and del NULL
**	2. copy list to temporary
**	3. looping of the list
**		3.1 copy tempopary to deltmp
**		3.2 temporary will be next list
**		3.3 call ft_lstdelone for deletion
**	4. set new list as NULL;
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*deltmp;

	if (lst == NULL || del == NULL)
		return ;
	tmp = *lst;
	while (tmp)
	{
		deltmp = tmp;
		tmp = tmp->next;
		ft_lstdelone(deltmp, del);
	}
	*lst = NULL;
}

/*int	main(void)
{
	t_list	*root;
	t_list	*tmp;

	// reason why we use ft_strdup
	// to assign it as pointer(malloc) and not literal(string) 

	// TEST CASE 1
	root = ft_lstnew(ft_strdup("A"));
	root->next = ft_lstnew(ft_strdup("B"));
	root->next->next = ft_lstnew(ft_strdup("C"));
	tmp = root;
	printf("\nWord used:- \n");
	while (tmp)
	{
		printf("[%s]", ((char *)tmp->content));
		tmp = tmp->next;
	}

	printf("\nRemove (first):-\n");
	ft_lstclear(&root, free);
	printf("[%s]\n", ((char *)root));

	// TEST CASE 2 (on middle)
	root = ft_lstnew(ft_strdup("A"));
	root->next = ft_lstnew(ft_strdup("B"));
	root->next->next = ft_lstnew(ft_strdup("C"));
	tmp = root;
	printf("\nWord used:- \n");
	while (tmp)
	{
		printf("[%s]", ((char *)tmp->content));
		tmp = tmp->next;
	}

	printf("\nRemove (middle):-\n");
	ft_lstclear(&root->next, free);
	printf("[%s]\n", ((char *)root->content));

	// TEST CASE 3 (null)
	root = ft_lstnew(ft_strdup("A"));
	root->next = ft_lstnew(ft_strdup("B"));
	root->next->next = ft_lstnew(ft_strdup("C"));
	tmp = root;
	printf("\nWord used:- \n");
	while (tmp)
	{
		printf("[%s]", ((char *)tmp->content));
		tmp = tmp->next;
	}

	printf("\nRemove (NULL):-\n");
	ft_lstclear(&root->next, NULL);
	tmp = root;
	while (tmp)
	{
		printf("[%s]", ((char *)tmp->content));
		tmp = tmp->next;
	}
}*/