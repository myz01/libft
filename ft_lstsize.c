/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 19:19:01 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/19 19:45:16 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	to count how many nodes got in linked list (identical with ft_strlen)
	1. while for check the list
	2. counter to count (just like index)
	3. use lst->next to move next node */

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	counter;

	counter = 0;
	while (lst)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}

/*int	main(void)
{
	t_list	*node;

	// TEST CASE 1
	node = ft_lstnew("hallo");
	node->next = ft_lstnew(" apa");
	node->next->next = ft_lstnew(" khabaq?");
	printf("%d", ft_lstsize(node));
}*/