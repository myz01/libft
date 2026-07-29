/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:02:35 by muhabin3          #+#    #+#             */
/*   Updated: 2026/07/29 15:10:18 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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