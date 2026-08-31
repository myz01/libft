/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:42:43 by muhabin3          #+#    #+#             */
/*   Updated: 2026/08/31 19:18:36 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("0: %d\n", ft_isdigit('0'));
	printf("9: %d\n", ft_isdigit('9'));
	printf("A: %d\n", ft_isdigit('A'));
	printf("@: %d\n", ft_isdigit('@'));
}*/