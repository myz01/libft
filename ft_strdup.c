/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:00:46 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/09 01:34:27 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	To allocate using malloc then copy exactly
	1. find len
	2. malloc the string
	3. if condition if malloc NULL
	4. copy string to pointer malloc
	5. add '\0'
	6. return pointer - len */

char	*ft_strdup(const char *s)
{
	size_t		s_len;
	char		*buffer;

	s_len = ft_strlen(s);
	buffer = (char *)malloc(sizeof(char) * s_len + 1);
	if (buffer == NULL)
		return (NULL);
	while (*s)
	{
		*buffer = *s;
		buffer++;
		s++;
	}
	*buffer = '\0';
	return (buffer - s_len);
}

int	main(void)
{
	char	*original;
	char	*duplicate;
	size_t	o_len;
	size_t	d_len;
	
	// TEST CASE 1
	original = "Baiya testing!";
	duplicate = ft_strdup(original);
	o_len = ft_strlen(original);
	d_len = ft_strlen(duplicate);

	printf("Original String: '%s' (%ld)\n", original, o_len);
	printf("Duplicate string: '%s' (%ld)\n", duplicate, d_len);

	// TEST CASE 2
	original = "";
	duplicate = ft_strdup(original);
	o_len = ft_strlen(original);
	d_len = ft_strlen(duplicate);

	printf("Original String: '%s' (%ld)\n", original, o_len);
	printf("Duplicate string: '%s' (%ld)\n", duplicate, d_len);

	// TEST CASE 3
	original = "123456789";
	duplicate = ft_strdup(original);
	o_len = ft_strlen(original);
	d_len = ft_strlen(duplicate);

	printf("Original String: '%s' (%ld)\n", original, o_len);
	printf("Duplicate string: '%s' (%ld)\n", duplicate, d_len);

    return(0);
}