/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:29:50 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/09 01:42:24 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	To find the length of str
	1. loop of str */

size_t	ft_strlen(const char *str)
{
	size_t	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

/*int main(void)
{
	// TEST CASE 1
	printf( "length: %ld", ft_strlen("hi my name iyz"));
}*/