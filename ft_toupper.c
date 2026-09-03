/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:31:35 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/03 23:39:00 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

/*#include <ctype.h>
int	main(void)
{
	// TEST CASE 1
	char	alpha;

	alpha = 'a';
	printf("Original toupper [%c]: %c \n", alpha, toupper(alpha));
	printf("Local ft_toupper [%c]: %c", alpha, ft_toupper(alpha));
}*/