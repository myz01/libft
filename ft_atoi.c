/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 10:41:08 by omyzx             #+#    #+#             */
/*   Updated: 2026/09/09 00:51:20 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	1. Create whitespace
	2. Check negative/positive sign
	3. ASCII to integer
	4. Negative sign if got one */

int	whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		negative;
	int		num;

	i = 0;
	negative = 0;
	num = 0;
	while (whitespace(nptr[i]))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		i++;
		negative++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	if (negative == 1)
		num = num * -1;
	return (num);
}

/*#include <stdlib.h>
int	main(void)
{
	// TEST CASE 1
	printf("\n243 sadas 34asasf\n");
	printf("Original atoi:- %d\n", atoi("243 sadas 34asasf"));
	printf("Local ft_atoi:- %d\n", ft_atoi("243 sadas 34asasf"));

	// TEST CASE 2 (space)
	printf("\n[space]      243 sadas 34asasf\n");
	printf("Original atoi:- %d\n", atoi("  243 sadas 34asasf"));
	printf("Local ft_atoi:- %d\n", ft_atoi("   243 sadas 34asasf"));

	// TEST CASE 3 (tab)
	printf("\n[tab]	243 sadas 34asasf\n");
	printf("Original atoi:- %d\n", atoi("	243 sadas 34asasf"));
	printf("Local ft_atoi:- %d\n", ft_atoi("	243 sadas 34asasf"));

	// TEST CASE 4 (space + negative)
	printf("\n[space]    -243 sadas 34asasf\n");
	printf("Original atoi:- %d\n", atoi("    -243 sadas 34asasf"));
	printf("Local ft_atoi:- %d\n", ft_atoi("    -243 sadas 34asasf"));

	// TEST CASE 5 (positive)
	printf("\n+243 sadas 34asasf\n");
	printf("Original atoi:- %d\n", atoi("+243 sadas 34asasf"));
	printf("Local ft_atoi:- %d\n", ft_atoi("+243 sadas 34asasf"));

	// TEST CASE 6 (repetitive -/+)
	printf("\n---243 sadas 34asasf\n");
	printf("Original atoi:- %d\n", atoi("---243 sadas 34asasf"));
	printf("Local ft_atoi:- %d\n", ft_atoi("---243 sadas 34asasf"));
	printf("\n++++243 sadas 34asasf\n");
	printf("Original atoi:- %d\n", atoi("++++243 sadas 34asasf"));
	printf("Local ft_atoi:- %d\n", ft_atoi("++++243 sadas 34asasf"));
	return (0);
}*/
