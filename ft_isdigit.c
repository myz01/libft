/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:42:43 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/09 01:04:22 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. numeric digit

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	// TEST CASE 1
	printf("0: %d\n", ft_isdigit('0'));
	printf("9: %d\n", ft_isdigit('9'));
	printf("A: %d\n", ft_isdigit('A'));
	printf("@: %d\n", ft_isdigit('@'));
}*/