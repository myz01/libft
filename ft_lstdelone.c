/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 00:06:11 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/21 21:15:20 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	
**	to delete and free the node of choosen in linked list
**	there heap and literal node as content
**	1. check both list or del is NULL then cancel
**	2. free the content first (by use del(lst->content)
**	3. free the nodes second
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*int	main(void)
{
	t_list	*root;
	t_list	*tmp;

	// reason why we use ft_strdup
	// to assign it as pointer(malloc) and not literal(string) 
	root = ft_lstnew(ft_strdup("A"));
	root->next = ft_lstnew(ft_strdup("B"));
	root->next->next = ft_lstnew(ft_strdup("C"));

	tmp = root;
	printf("\nWord used:- \n");
	while (tmp)
	{
		printf("[%s]\n", ((char *)tmp->content));
		tmp = tmp->next;
	}

	// TEST CASE 1 
	tmp = root->next;
	root->next = root->next->next;
	ft_lstdelone(tmp, free);

	tmp = root;
	printf("\nDelete B then relink back:-\n");
	while (tmp)
	{
		printf("[%s]\n", ((char *)tmp->content));
		tmp = tmp->next;
	}

	// TEST CASE 2 (flow)
	tmp = root->next;
	ft_lstdelone(tmp, free);

	tmp = root;
	root->next = ft_lstnew(ft_strdup("Z"));
	printf("\nDelete C then add %s:-\n", (char *)root->next->content);
	while (tmp)
	{
		printf("[%s]\n", ((char *)tmp->content));
		tmp = tmp->next;
	}

	// TEST CASE 3 (null)
	tmp = root->next;
	ft_lstdelone(tmp, NULL);

	tmp = root;
	printf("\nDelete with NULL:-\n");
	while (tmp)
	{
		printf("[%s]\n", ((char *)tmp->content));
		tmp = tmp->next;
	}

	// freeing
	while (root)
	{
		tmp = root->next;
		ft_lstdelone(root, free);
		root = tmp;
	}
}*/