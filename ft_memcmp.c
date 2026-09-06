/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 23:41:26 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/07 00:50:16 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*tmp1 != *tmp2)
			return (*tmp1 - *tmp2);
		n--;
		tmp1++;
		tmp2++;
	}
	return (0);
}

#include <string.h>
int	main(void)
{
	// TEST CASE 1 (int)
	int	s1[] = {1, 1, 3};
	int	s2[] = {1, 3, 3};

	printf("Original memcmp:- %d\n", memcmp(s1, s2, sizeof(s1)));
	printf("Local ft_memcmp:- %d\n\n", ft_memcmp(s1, s2, sizeof(s1)));

	// TEST CASE 2 (char)
	char	*str1 = "ABCED";
	char	*str2 = "ABCEZ";

	printf("Original memcmp:- %d\n", memcmp(str1, str2, 5));
	printf("Local ft_memcmp:- %d\n\n", ft_memcmp(str1, str2, 5));

	// TEST CASE 3 (empty)
	printf("Original memcmp:- %d\n", memcmp(str1, str2, 0));
	printf("Local ft_memcmp:- %d\n", ft_memcmp(str1, str2, 0));
}