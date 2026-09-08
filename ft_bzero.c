/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:20:16 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/09 00:52:37 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	1. call ft_memset and replace with '\0'

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*#include <string.h>
int	main(void)
{

	// TEST CASE 1
	char	str[10] = {'X', 'X', 'Z', 'B', 'B'};
	char	str1[10] = {'A', 'B', 'C', 'C', 'D'};

	printf("%s\n", str);
	ft_memset(str + 5, 'Z', 4);
	printf("ft_memset- %s\n", str);
	ft_bzero(str, sizeof(str));
	printf("ft_bzero- %s\n", str);

	printf("%s\n", str1);
	ft_memset(str1 + 5, 'Z', 4);
	printf("ft_memset- %s\n", str1);
	bzero(str1, sizeof(str1));
	printf("bzero- %s\n", str1);
}*/