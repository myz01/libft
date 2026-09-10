/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:48:10 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/10 11:52:40 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	to allocate memory for substring then give output 
	of substring based on string
	1. if condition on s if NULL
	2. find length of s
	3. if condition on start > s(len) (real len = 0)
	4. if condition on len > clamp s(len) with start (real len = clamp)
	5. malloc latest len + 1 for null terminator
	6. check NULL on previous malloc
	7. ft_strlcpy */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen)
		len = 0;
	else if (len > strlen - start)
		len = strlen - start;
	sstr = malloc(len + 1);
	if (sstr == NULL)
		return (NULL);
	ft_strlcpy(sstr, s + start, len);
	return (sstr);
}

/*int	main(void)
{
	char const	*str;
	char		*substr;

	// TEST CASE 1 (normal)
	str = "ABCDEF";
	substr = ft_substr(str, 2, 3);
	printf("String :- %s \nSubstring :- %s\n", str, substr);
	printf("Substring length: %ld\n", ft_strlen(substr));
	printf("Using ft_strnstr :- %s\n\n",
		ft_strnstr(str, substr, ft_strlen(str)));
	free(substr);

	// TEST CASE 2 (NULL)
	str = NULL;
	substr = ft_substr(str, 5, 10);
	printf("String :- %s \nSubstring :- %s\n\n", str, substr);
	free(substr);

	// TEST CASE 3 (len > str)
	str = "ABCDEF";
	substr = ft_substr(str, 4, ft_strlen(str) + 2);
	printf("String :- %s \nSubstring :- %s\n", str, substr);
	printf("Substring length: %ld\n", ft_strlen(substr));
	printf("Using ft_strnstr :- %s\n\n",
		ft_strnstr(str, substr, ft_strlen(str)));
	free(substr);

	// TEST CASE 3 (start > str)
	str = "ABCDEF";
	substr = ft_substr(str, 8, 4);
	printf("String :- %s \nSubstring :- %s\n", str, substr);
	printf("Substring length: %ld\n", ft_strlen(substr));
	printf("Using ft_strnstr :- %s\n\n",
		ft_strnstr(str, substr, ft_strlen(str)));
	free(substr);

	// TEST CASE 4 (empty)
	str = "";
	substr = ft_substr(str, 0, 4);
	printf("String :- %s \nSubstring :- %s\n", str, substr);
	printf("Substring length: %ld\n", ft_strlen(substr));
	printf("Using ft_strnstr :- %s\n\n",
		ft_strnstr(str, substr, ft_strlen(str)));
	free(substr);
}*/