/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 03:17:34 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/09 00:55:58 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	1. Cond. check overflow with PTRDIFF_MAX
	2. 42 rule (n or size == 0) return
	3. call malloc
	4. check malloc NULL
	5. call ft_memset to initialize all 0 */

void	*ft_calloc(size_t n, size_t size)
{
	void	*new;

	if (n != 0 && size > PTRDIFF_MAX / n)
		return (NULL);
	else if (n == 0 || size == 0)
		return (malloc(n * size));
	new = malloc(n * size);
	if (new == NULL)
		return (NULL);
	new = ft_memset(new, 0, n * size);
	return (new);
}

/*int main(void)
{
	int 	*ptr;
	size_t	i;
	size_t	num;

	num = 10;
	ptr = ft_calloc(10, sizeof(int));
	ft_memset(ptr, 0xFF, 10 * sizeof(int));
	free (ptr);

	// TEST CASE 1 (ft_calloc)
	printf("\nLocal ft_calloc:-\n");
	ptr = ft_calloc(num, sizeof(int));
	i = 0;
	while (i < 10)
	{
		printf("%d || ", ptr[i]);
		i++;
	}
	free(ptr);

	// TEST CASE 2 (calloc)
	printf("\nOriginal calloc:-\n");
	ptr = calloc(num, sizeof(int));
	i = 0;
	while (i < 10)
	{
		printf("%d || ", ptr[i]);
		i++;
	}
	free(ptr);

	// TEST CASE 3 (malloc)
	printf("\nOriginal malloc:-\n");
	ptr = malloc(num * sizeof(int));
	i = 0;
	while (i < 10)
	{
		printf("%d || ", ptr[i]);
		i++;
	}

	// TEST CASE (overflow)
	printf("\nExample of overflow ft_calloc:-\n");
	ptr = ft_calloc((int)PTRDIFF_MAX, 2);

	if (ptr == NULL)
		printf ("error, you got overflow happening");
	free(ptr);
}*/
