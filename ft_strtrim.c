/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:52:44 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/11 09:39:41 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	To remove the beginning and the end of the string based on the set
	1. create fx same_or_not that check char with string of set return 1
	2. check NULL for both
	3. loop to check start begin from where
	4. loop to check end begin from where
	5. do ft_substr on it to print the middle part */

int	same_or_not(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*buffer;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && same_or_not(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && same_or_not(s1[end], set))
		end--;
	buffer = ft_substr(s1, start, end - start + 1);
	return (buffer);
}

/*int	main(void)
{
	char	*str;
	char	*set;

	// TEST CASE 1
	str = "   !!!  !! [please trim this]   !!! !!!! ";
	set = "! ";
	printf("\nString - [%s] || Set - [%s]\n", str, set);
	printf("String trim :- [%s]\n", ft_strtrim(str, set));

	// TEST CASE 2 (empty str)
	str = "";
	set = "! ";
	printf("\nString - [%s] || Set - [%s]\n", str, set);
	printf("String trim :- [%s]\n", ft_strtrim(str, set));

	// TEST CASE 3 (empty set)
	str = "   !!!  !! [please trim this]   !!! !!!! ";
	set = "";
	printf("\nString - [%s] || Set - [%s]\n", str, set);
	printf("String trim :- [%s]\n", ft_strtrim(str, set));

	// TEST CASE 4 (null)
	str = NULL;
	set = "! ";
	printf("\nString - [%s] || Set - [%s]\n", str, set);
	printf("String trim :- [%s]\n", ft_strtrim(str, set));
}*/