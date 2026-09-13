/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 23:59:04 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/14 01:26:38 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	to make standard putstr able to read FD

	File Descriptor		Name				<unistd.h>		<stdio.h>
	0					Standard Input		STDIN_FILENO	stdin
	1					Standard Output		STDOUT_FILENO	stdout
	2					Standard Error		STDERR_FILENO	stderr
*/

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, &(*s), 1);
		s++;
	}
}

/*int	main(void)
{
	char	input[100];
	int		bytes;
	char	*str;
	
	// TEST CASE (1, 2)
	// run ./a.out > out.txt 2> err.txt
	ft_putstr_fd("Hi Output\n", 1);
	ft_putstr_fd("Error Bye\n", 2);

	// TEST CASE (0) ctrl + D to sent raw bytes
	str = "\nEnter any string:- ";
	ft_putstr_fd(str, 1);

	bytes = read(0, input, 99);
	input[bytes] = '\0';

	ft_putstr_fd("You entered:- ", 1);
	ft_putstr_fd(input, 1);
}*/