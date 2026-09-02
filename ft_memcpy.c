/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:14:08 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/02 14:10:57 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char			*char_dest;
	const char		*char_src;
	size_t			i;

	char_dest = dest;
	char_src = src;
	i = 0;
	while (i < num)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}



/*#include <stdio.h>
int main(void)
{
	const char 		*src = "help me please pass this libft";
	char			dest[100];

	ft_memcpy(dest, src, ft_strlen(src) + 1);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	int	src1[2] = {200, 100};
	int	dest1[2];

	ft_memcpy(dest1, src1, sizeof(src1));

	int	i = 0;
	while (i < 2)
	{
		printf("dest[%d] = %d\n", i, dest1[i]);
		printf("src[%d] = %d\n", i, src1[i]);
		i++;
	}

	return (0);
} */