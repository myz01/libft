/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:36:26 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/21 21:45:24 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	identical with ft_lstclear but with function where we can choose to apply:-
**	1. identify list and function was NULL then return
**	2. loop for each list node
**		2.1 apply function of f
**		2.2 go to next list
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	f(void *content)
{
	char	*str;

	str = (char *)content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
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
	ft_lstiter(root, NULL);
	printf("\nResult with null:- ");
	tmp = root;
	while (tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}

	// TEST CASE 2 (with ft_toupper)
	ft_lstiter(root, f);
	printf("\nResult with ft_toupper:- ");
	tmp = root;
	while (tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}
}*/