/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 14:00:20 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/02 23:30:58 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}


/*int main(void)
{
	// TEST CASE 1
	printf("0: %d\n", ft_isalnum('0'));
	printf("9: %d\n", ft_isalnum('9'));
	printf("A: %d\n", ft_isalnum('A'));
	printf("a: %d\n", ft_isalnum('a'));
	printf("@: %d\n", ft_isalnum('@'));
}*/