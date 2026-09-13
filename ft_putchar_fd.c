/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 22:50:33 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/14 01:26:38 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	to make standard putchar able to read FD

	File Descriptor		Name				<unistd.h>		<stdio.h>
	0					Standard Input		STDIN_FILENO	stdin
	1					Standard Output		STDOUT_FILENO	stdout
	2					Standard Error		STDERR_FILENO	stderr
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char	c;
	char	*str;
	
	// TEST CASE (1, 2)
	// run ./a.out > out.txt 2> err.txt
	ft_putchar_fd('M', 1);
	ft_putchar_fd('B', 2);

	// TEST CASE (0) ctrl + D to sent raw bytes
	str = "\nEnter any char:- ";
	while (*str)
	{
		ft_putchar_fd(*str, 1);
		str++;
	}
	read(0, &c, 1);
	printf("You enter:- %c\n", c);
}*/