/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:46:13 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/22 13:26:44 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	to create new linked list and iretate previous list to new list
**	also delete it when needed
**	1. create a new list and node
**	2. check NULL on list
**	3. loop on list
**		3.1 condition if use function, use with it, if not, use without
**		3.2 
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (lst == NULL)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		if (f)
			new_node = ft_lstnew(f(lst->content));
		else
			new_node = ft_lstnew(lst->content);
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*void	*f(void *content)
{
	char	*str;
	size_t	i;

	str = ft_strdup((char *)content);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
int	main(void)
{
	t_list	*root;
	t_list	*tmp;

	root = ft_lstnew(ft_strdup("My"));
	ft_lstadd_back(&root, ft_lstnew(ft_strdup("Cat")));
	ft_lstadd_back(&root, ft_lstnew(ft_strdup("Cute!!!")));

	printf("\nOriginal:- ");
	tmp = root;
	while (tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}

	// TEST CASE 1 (null)
	tmp = ft_lstmap(root, NULL, NULL);
	printf("\nResult with null:- ");
	while (tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}

	// TEST CASE 2 (with ft_toupper)
	tmp = ft_lstmap(root, f, NULL);
	printf("\nResult with ft_toupper:- ");
	while (tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}

	// TEST CASE 3 (null on list)
	tmp = NULL;
	ft_lstmap(tmp, NULL, NULL);
	printf("\nNULL on list:- %s", (char *)tmp);
}*/