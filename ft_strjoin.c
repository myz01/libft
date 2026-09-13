/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 12:11:22 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/10 18:52:26 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	to allocate memory and do concatenating s1 and s2
	1. check if NULL s1 and s2
	2. find len s1 and s2
	3. malloc the size len of both and check NULL
	4. memcpy as to copy s1
	5. buffer + len of s1 to start concatenating
	6. concatenating then result --s1&s2*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	char	*result;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	buffer = malloc(len1 + len2 + 1);
	if (buffer == NULL)
		return (NULL);
	ft_memcpy(buffer, s1, len1);
	buffer += len1;
	while (*s2)
	{
		*buffer = *s2;
		buffer++;
		s2++;
	}
	*buffer = '\0';
	result = buffer - len1 - len2;
	return (result);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;

	// TEST CASE 1
	s1 = "Name ";
	s2 = "Iyz";
	printf("\nNormal S1 S2\ns1 :- [%s] || s2 :- [%s]\n", s1, s2);
	printf("ft_strjoin :- [%s]\n", ft_strjoin(s1, s2));

	// TEST CASE 2 (empty)
	s1 = "";
	s2 = "Iyz";
	printf("\nEmpty S1\ns1 :- [%s] || s2 :- [%s]\n", s1, s2);
	printf("ft_strjoin :- [%s]\n", ft_strjoin(s1, s2));

	// TEST CASE 3 (NULL)
	s1 = "Iyz";
	s2 = NULL;
	printf("\nNULL S2\ns1 :- [%s] || s2 :- [%s]\n", s1, s2);
	printf("ft_strjoin :- [%s]\n", ft_strjoin(s1, s2));
}*/