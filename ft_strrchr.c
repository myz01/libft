/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 23:43:32 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/04 17:53:26 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	if (c == '\0')
		return (ft_strchr(str, '\0'));
	len = ft_strlen((char *)str);
	while (len--)
	{
		if (str[len] == c)
			return ((char *)str+len);
	}
	return (0);
}

/*#include <string.h>
int	main(void)
{
	// TEST CASE 1
	const char	*string;

	string = "Hi, who am i and you?";
	printf("%s\n", string);
	printf("Original strchr:- %s\n", strchr(string, 'o'));
	printf("Original strrchr:- %s\n", strrchr(string, 'o'));
	printf("Local ft_strrchr:- %s\n", ft_strrchr(string, 'o'));

	// TEST CASE 2
	char	str[50];

	memcpy(str, "Hello\0World", 11);
	printf("\nHello/0World\n");
	printf("Original strchr null on middle:- %s\n", strchr(str, 'l'));
	printf("Original strrchr null on middle:- %s\n", strrchr(str, 'l'));
	printf("Local ft_strrchr null on middle:- %s\n", ft_strrchr(str, 'l'));
	printf("Local ft_strrchr word after null:- %s\n", ft_strrchr(str, 'W'));
	return (0);
}*/
