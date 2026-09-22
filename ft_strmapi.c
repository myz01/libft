/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 19:46:31 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/22 16:07:19 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	to applies any function of f to each of char in string s
**	1. check s either NULL
**	2. find the length of s
**	3. allocated a memory with malloc
**	4. loop between i < len
**		4.1 to fill in allocated memory with f function 
**	5. add '\0' at the end 
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	unsigned int	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* char	fx_toupper(unsigned int n, char c)
{
	(void)n;
	return (ft_toupper(c));
}

int	main(void)
{
	char	*result;
	char	*str;

	// TEST CASE 1
	str = "My name iyz and study at 42";
	result = ft_strmapi(str, fx_toupper);
	printf("\nString:-	[%s]\nft_strmapi:-	[%s]\n", str, result);
	free(result);

	// TEST CASE 2 (null)
	str = NULL;
	result = ft_strmapi(str, fx_toupper);
	printf("\nString:-	[%s]\nft_strmapi:-	[%s]\n", str, result);
	free(result);
	return (0);
} */