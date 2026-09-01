/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 14:33:27 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/01 09:13:10 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	printf("null: %d\n", ft_isascii(0));
	printf("DEL: %d\n", ft_isascii(127));
	printf("128 in ascii: %d\n", ft_isascii(128));
	printf("-1 in ascii: %d\n", ft_isascii(-1));
}*/