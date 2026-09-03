/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:22:45 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/03 19:00:36 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	// TEST CASE 1
	char	s[10] = {'X', 'X', 'Z', 'B', 'B'};

	printf("%s\n", s);
	
	//memset(s, 'X', 5);
	memset(s + 5, 'Y', 3);
	//memset(s + 8, 'Z', 2);
	printf("%s\n", s);

	//ft_memset(s, 'X', 5);
	ft_memset(s + 5, 'Y', 3);
	//ft_memset(s + 8, 'Z', 2);
	printf("%s\n", s);

	printf("%s\n", (unsigned char *)ft_memset(s, 'W', 10));
	return (0);
}*/