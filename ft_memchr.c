/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 18:28:51 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/06 19:40:15 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (*str == c)
			return (str);
		i++;
		str++;
	}
	return (0);
}

/*#include <string.h>
int	main(void)
{
	char	*str;

	// TEST CASE 1
	str = "muizyasin\0001@gmail.com";
	printf("string:- muizyasin/0001@gmail.com\n");
	printf("\nbyte of length\n");
	printf("Original memchr:- %s\n", (char *)memchr(str, '@', ft_strlen(str)));
	printf("Local ft_memchr:- %s\n",
		(char *)ft_memchr(str, '@', ft_strlen(str)));

	// TEST CASE 2 (less bytes)
	printf("\nless bytes\n");
	printf("Original memchr:- %s\n", (char *)memchr(str, 'i', 8));
	printf("Local ft_memchr:- %s\n", (char *)ft_memchr(str, 'i', 8));

	//TEST CASE 3 (null in middle)
	printf("\nnull in middle\n");
	printf("Original memchr:- %s\n", (char *)memchr(str, 'y', 20));
	printf("Local ft_memchr:- %s\n", (char *)ft_memchr(str, 'y', 20));

	//TEST CASE 4
	printf("\nmismatched\n");
	printf("Original memchr:- %s\n", (char *)memchr("", 'b', 20));
	printf("Local ft_memchr:- %s\n", (char *)ft_memchr("", 'b', 20));
}*/