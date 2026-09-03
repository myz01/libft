/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:14:08 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/03 18:48:25 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char		*char_dest;
	const char	*char_src;
	size_t		i;

	char_dest = (char *)dest;
	char_src = (const char *)src;
	i = 0;
	if (dest <= src)
	{
		while (i < num)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	else
		ft_memmove(dest, src, num);
	return (dest);
}



/*#include <string.h>
int main(void)
{
	// TEST CASE 1 (char)
	const char		*src;
	char			dest[100];
	int				i;

	src = "help me please pass this libft";
	ft_memcpy(dest, src, ft_strlen(src) + 1);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	// TEST CASE 2 (int)
	int	src1[2] = {200, 100};
	int	dest1[2];

	ft_memcpy(dest1, src1, sizeof(src1));

	i = 0;
	while (i < 2)
	{
		printf("dest[%d] = %d\n", i, dest1[i]);
		printf("src[%d] = %d\n", i, src1[i]);
		i++;
	}

	// TEST CASE 3 (overlapping)
	int	source1[10] = {1,2,3,4,5,6,7,8,9,10};
	int	source2[10] = {1,2,3,4,5,6,7,8,9,10};

	ft_memcpy(source1, source1 + 3, sizeof(int) * 5);
	memmove(source2 + 2, source2, sizeof(int) * 8);

	i = 0;
	while (i < 10)
	{
		printf("source1 latest[%d] = %d\n", i, source1[i]);
		i++;
	}
	printf("------------------------------\n");
	i = 0;
	while (i < 10)
	{
		printf("source2 latest[%d] = %d\n", i, source2[i]);
		i++;
	}
	return (0);
} */