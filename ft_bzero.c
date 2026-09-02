/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:20:16 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/02 14:10:59 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t			i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char	str[10] = {'X', 'X', 'Z', 'B', 'B'};

	printf("%s\n", str);
	ft_memset(str + 5, 'Z', 4);
	printf("ft_memset- %s\n", str);
	ft_bzero(str, sizeof(str));
	printf("ft_bzero- %s\n", str);
	bzero(str, sizeof(str));
	printf("bzero- %s\n", str);
}*/