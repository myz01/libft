/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:57:45 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/03 19:00:36 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}

	if (c == '\0')
		return ((char *)str);
	return (0);
}

/*int main(void)
{
	// TEST CASE 1
	char	*string = "this is MY string!";
	char	*test = ft_strchr(string, 's');

	printf("test: %s", test);
}*/