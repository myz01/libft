/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 19:20:51 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/22 01:31:45 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	To find the length after cat both
	1. len dst
	2. loop of doing strcat
	3. len dst again after cat */

/*	To find the length after cat both
	1. len dst and src
	2. if to check len dst not higher size
		2.1 loop to compare of src with terminator and current len with size 
		2.2 else len dst same as size
	3. return plus len src and dst */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dst < size)
	{
		while (src[i] && (len_dst + i) < (size - 1))
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
	}
	else
		len_dst = size;
	return (len_dst + len_src);
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