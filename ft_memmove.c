/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 17:41:42 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/04 18:34:16 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//check on "Operator Precedence and Associativity Table"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	char		*char_dest;
	const char	*char_src;

	char_dest = (char *)dest;
	char_src = (char *)src;

	if (dest <= src)
	{
		while (num--)
			*char_dest++ = *char_src++;
	}
	else if (dest > src)
	{
		char_dest += num - 1;
		char_src += num - 1;
		while (num--)
			*char_dest-- = *char_src--;
	}
	return (dest);
}

#include <string.h>
int	main(void)
{
	// TEST CASE 1 (char)
	const char	src[10] = "libft";
	char		dest[10] = "libc";
	int			i;

	ft_memmove(dest + 4, src + 3, 6);
	printf("ft_mmemove	:- src [%s] dst [%s]\n", src, dest);

	// TEST CASE 2 (int)
	int	src1[4] = {200, 100, 300, 400};
	int	dest1[4];

	ft_memmove(dest1, src1, sizeof(src1));

	i = 0;
	while (i < 4)
	{
		printf("dest[%d] = %d | src[%d] = %d\n", i, dest1[i], i, src1[i]);
		i++;
	}

	// TEST CASE 3 (overlapping)
	int	source1[10] = {1,2,3,4,5,6,7,8,9,10};
	int	source2[10] = {1,2,3,4,5,6,7,8,9,10};

	ft_memmove(source1, source1 + 3, sizeof(int) * 3);
	memmove(source2 + 5, source2, sizeof(int) * 5);

	i = 0;
	while (i < 10)
	{
		printf("source1 latest[%d] = %d | source2 latest[%d] = %d\n", 
			i, source1[i], i, source2[i]);
		i++;
	}
	return (0);
}