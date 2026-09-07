/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 11:47:53 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/08 01:28:30 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*big && i < len)
	{
		j = 0;
		while (*little && big[i + j] == little[j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}

/*#include <string.h>
int	main(void)
{
	char	lstr[]  = "ABCDEF";
	char	sstr[] = "DE";

	printf("Long String:-%s\nSmall String:-%s\n", lstr, sstr);

	// TEST CASE 1 (sstr search)
	printf("\nnormal search\n");
	printf("Original strstr:- %s\n", strstr(lstr, sstr));
	printf("Local ft_strnstr:- %s\n", ft_strnstr(lstr, sstr, 6));

	// TEST CASE 2 (less length)
	printf("\nless length search\n");
	printf("Original strstr:- %s\n", strstr(lstr, sstr));
	printf("Local ft_strnstr:- %s\n", ft_strnstr(lstr, sstr, 4));

	// TEST CASE 3 (empty small string)
	printf("\nempty string search\n");
	printf("Original strstr:- %s\n", strstr(lstr, ""));
	printf("Local ft_strnstr:- %s\n", ft_strnstr(lstr, "", 6));
    return (0);
}*/






