/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 19:20:51 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/03 23:25:30 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dst);
	i = 0;
	while (i < size)
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	len = ft_strlen(dst);
	return (len);
}

/*int	main(void)
{
	const char	*src;
	char		dst[50] = "abc";
	size_t		ori, local;

	// TEST CASE 1
	src = "def";
	printf("dst: %s \nsrc: %s\n", dst, src);
	ori = strlcat(dst, src, 2);
	printf("Offical strlcat length: %ld\n", ori);
	local = ft_strlcat(dst, src, 3);
	printf("Local ft_strlcat length: %ld", local);
}*/