/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:30:40 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/09 01:41:50 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	To do copy based on size then find the length
	1. loop do strcpy
	2. find length dst*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

/*#include <string.h>
int	main(void)
{
	// TEST CASE 1
	char	buffer[50];
	char	*str = "strlcpy ez peazy";
	printf("length of %s : %ld\n", str, ft_strlcpy(buffer, str, 30));
	printf("length of %s : %ld\n", str, ft_strlcpy(buffer, str, 2));
	return (0);
}*/