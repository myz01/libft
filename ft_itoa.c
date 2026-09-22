/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 14:02:19 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/22 15:58:03 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	to change from integer to ASCII with allocate memory
**	1. create function length to check the length of integer
**	2. create function conversion to convert
**	3. malloc in conversion function
**	4. create function itoa to call every helper function
*/

size_t	int_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*conversion(size_t len, long n)
{
	char	*buffer;
	int		tmp;

	buffer = malloc(len + 1);
	if (buffer == NULL)
		return (NULL);
	buffer[len] = '\0';
	if (n < 0)
	{
		buffer[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		buffer[0] = '0';
	while (n > 0)
	{
		len--;
		tmp = n % 10;
		buffer[len] = tmp + '0';
		n = n / 10;
	}
	return (buffer);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;

	num = n;
	len = int_len(num);
	return (conversion(len, num));
}

/*int	main(void)
{
	int	number;
	char	*result;

	// TEST CASE 1 (positive)
	number = 28092001;
	result = ft_itoa(number);
	printf("\nThe integer:-	[%d]\nThe string:-	[%s]\n", number, result);
	free(result);

	// TEST CASE 2 (negative)
	number = -28092001;
	result = ft_itoa(number);
	printf("\nThe integer:-	[%d]\nThe string:- 	[%s]\n", number, result);
	free(result);

	// TEST CASE 3 (exceed limit -)
	number = INT_MIN;
	result = ft_itoa(number);
	printf("\nThe integer:-	[%d]\nThe string:-	[%s]\n", number, result);
	free(result);

	// TEST CASE 4 (exceed limit +)
	number = INT_MAX;
	result = ft_itoa(number);
	printf("\nThe integer:-	[%d]\nThe string:-	[%s]\n", number, result);
	free(result);
}*/