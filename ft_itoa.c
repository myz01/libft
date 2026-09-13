/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 14:02:19 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/13 19:40:00 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	int_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*conversion(size_t len, int n)
{
	char	*buffer;
	int		tmp;

	buffer = ft_calloc(len, sizeof(char));
	len = len - 1;
	if (n < 0)
	{
		buffer[0] = '-';
		n = n * -1;
	}
	buffer[len] = '\0';
	while (n >= 10)
	{
		len--;
		tmp = n % 10;
		buffer[len] = tmp + '0';
		n = n / 10;
	}
	buffer[len - 1] = n + '0';
	return (buffer);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;

	if (n == INT_MIN)
		n = INT_MIN + 1;
	len = int_len(n) + 1;
	result = conversion(len, n);
	return (result);
}

int	main(void)
{
	int	number;
	char	*result;

	// TEST CASE 1 (positive)
	number = 28092001;
	result = ft_itoa(number);
	printf("\nThe integer:-	[%d]\nThe string:-	[%s]\n", number, result);

	// TEST CASE 2 (negative)
	number = -28092001;
	result = ft_itoa(number);
	printf("\nThe integer:-	[%d]\nThe string:- 	[%s]\n", number, result);

	// TEST CASE 3 (exceed limit -)
	number = INT_MIN;
	result = ft_itoa(number);
	printf("\nThe integer:-	[%d]\nThe string:-	[%s]\n", number, result);

	// TEST CASE 4 (exceed limit +)
	number = INT_MAX;
	result = ft_itoa(number);
	printf("\nThe integer:-	[%d]\nThe string:-	[%s]\n", number, result);
}