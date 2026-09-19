/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 16:20:38 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/17 16:15:00 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	to do simple linked list which each 1 node and end with NULL
	1. create new node as temp
	2. malloc it to allocate based on t_list
	3. check malloc NULL
	4. insert 1st node with content
	5. insert last node with NULL */

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int	main(void)
{
	char	*str;
	t_list	*node;

	// TEST CASE 1 (to check what inside)
	str = "Hello, 42";
	node = ft_lstnew(str);

	printf("String:- %s\n", str);
	printf("1st Node:- %s\n", (char *)node->content);
	printf("2nd Node:- %s\n", (char *)node->next);

	// TEST CASE 2 (null)
	str = NULL;
	node = ft_lstnew(str);

	printf("\nString:- %s\n", str);
	printf("NULL Node:- %s\n", (char *)node->content);
}*/

