/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 22:04:34 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/13 22:47:40 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	fx_toupper(unsigned int n, char *str)
{
	(void)n;
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 'a' + 'A';
}

int	main(void)
{
	char	str[] = "My name iyz and study at 42";

	// TEST CASE 1
	printf("\nString:-	[%s]", str);
	ft_striteri(str, fx_toupper);
	printf("\nResult:-	[%s]", str);
}*/