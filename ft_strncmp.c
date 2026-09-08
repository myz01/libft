/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:16:09 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/09 01:43:59 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	To find the total of minus both byte compare
	1. if condition to find 0
	2. loop to get the index 
	3. return with s1 minus s2 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*#include <string.h>
int	main(void)
{
	const char	*A;
	const char	*B;

	A = "ABCEFG";
	B = "ABCE1Z";

	printf("A = %s || B = %s", A, B);

	// TEST CASE 1 (0)
	//add this in fx to see flow :- printf("|%c-%c|", s1[i], s2[i]);
	printf("\nOriginal strncmp '0':- %d\n", strncmp(A, B, 0));
	printf("Local ft_strncmp '0':- %d\n", ft_strncmp(A, B, 0));

	// TEST CASE 2 (same)
	printf("\nOriginal strncmp '4':- %d\n", strncmp(A, B, 4));
	printf("Local ft_strncmp '4':- %d\n", ft_strncmp(A, B, 4));

	// TEST CASE 3 (diff)
	printf("\nOriginal strncmp '5':- %d\n", strncmp(A, B, 5));
	printf("Local ft_strncmp '5':- %d\n", ft_strncmp(A, B, 5));
	printf("Original strncmp '6':- %d\n", strncmp(A, B, 6));
	printf("Local ft_strncmp '6':- %d\n", ft_strncmp(A, B, 6));
}*/