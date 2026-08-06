/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:16:09 by muhabin3          #+#    #+#             */
/*   Updated: 2026/08/06 11:56:12 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	n = n -1;
	while (s2[i] && s1[i] == s2[i] && i < n)
	{
		printf("|%c-%c|", s1[i], s2[i]);
		i++;
	}
		//i++;
	return (s1[i] - s2[i]);
}

//#include <stdio.h>
int	main(void)
{
	printf("\n%d", ft_strncmp("ABCD", "ABCD", 3));
}