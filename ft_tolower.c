/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:43:03 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/03 23:42:06 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}

/*#include <ctype.h>
int	main(void)
{
	// TEST CASE 1
	char	alpha;

	alpha = 'A';
	printf("Original tolower [%c]: %c \n", alpha, tolower(alpha));
	printf("Local ft_tolower [%c]: %c", alpha, ft_tolower(alpha));
}*/