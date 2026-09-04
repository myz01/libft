/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:57:45 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/04 17:52:52 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (*str == '\0' && *str == c)
	{
		return ((char *)str);
	}
	return (0);
}


/*#include <string.h>
int main(void)
{
	// TEST CASE 1
	char	*string;

	string = "This is MY string!";
	printf("%s\n", string);
	printf("Original strchr:- %s\n", strchr(string, 'T'));
	printf("Local ft_strchr:- %s\n", ft_strchr(string, 'T'));

	//	TEST CASE 2
	char	str[50];

	memcpy(str, "Hello\0World", 11);
	printf("\nHello/0World\n");
	printf("Original strchr null on middle:- %s\n", strchr(str, 'l'));
	printf("Local ft_strchr null on middle:- %s\n", ft_strchr(str, 'l'));
}*/