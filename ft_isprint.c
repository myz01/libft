/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:02:35 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/01 09:13:10 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	printf("NUL: %d\n", ft_isprint(0));
	printf("B: %d\n", ft_isprint('B'));
	printf("DEL: %d\n", ft_isprint(127));
	printf("&: %d\n", ft_isprint('&'));
}*/