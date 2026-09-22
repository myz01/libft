/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 00:36:54 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/22 16:20:13 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	to make standard putendl that same as putstr + newlines able to read FD
**
**	File Descriptor		Name				<unistd.h>		<stdio.h>
**	0					Standard Input		STDIN_FILENO	stdin
**	1					Standard Output		STDOUT_FILENO	stdout
**	2					Standard Error		STDERR_FILENO	stderr
*/

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*int	main(void)
{
	char	input[16];
	int		bytes;
	char	*str;

	// TEST CASE (1, 2)
	// run ./a.out > out.txt 2> err.txt
	ft_putendl_fd("Hi Output", 1);
	ft_putendl_fd("Error Bye", 2);

	// TEST CASE (0) ctrl + D to sent raw bytes
	str = "\nEnter any string:- ";
	ft_putstr_fd(str, 1);

	bytes = read(0, input, 15);
	input[bytes] = '\0';

	ft_putstr_fd("\nYou entered:- ", 1);
	ft_putendl_fd(input, 1);
}*/