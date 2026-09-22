/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 01:02:53 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/22 16:21:23 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	to make standard putnbr able to read FD
**
**	File Descriptor		Name				<unistd.h>		<stdio.h>
**	0					Standard Input		STDIN_FILENO	stdin
**	1					Standard Output		STDOUT_FILENO	stdout
**	2					Standard Error		STDERR_FILENO	stderr
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*int	main(void)
{
	int 	nbr;
	char	input[16];
	int		bytes;
	char	*str;

	// TEST CASE (1, 2)
	// run ./a.out > out.txt 2> err.txt
	nbr = -41;
	ft_putnbr_fd(nbr, 1);
	ft_putchar_fd('\n', 1);
	nbr = 100;
	ft_putnbr_fd(nbr, 2);
	ft_putchar_fd('\n', 2);

	// TEST CASE (0) ctrl + D to sent raw bytes
	str = "\nEnter any string:- ";
	ft_putstr_fd(str, 1);

	bytes = read(0, input, 15);
	input[bytes] = '\0';
	nbr = ft_atoi(input);

	ft_putstr_fd("\nYour number:- ", 1);
	ft_putnbr_fd(nbr, 1);
}*/