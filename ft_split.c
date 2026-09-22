/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 09:20:32 by muhabin3          #+#    #+#             */
/*   Updated: 2026/09/22 15:55:48 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	to split each word in sentence with char as terminator
**	1. count every 'words' on sentence by use 3x while
**	2. create a function to allocate a 'word' then malloc memory of that 'word'
**	3. loop fx free for free the 'word' of the sentences then the sentences
**	4. create main fx ft_split 
**		4.1 check NULL on str
**		4.2 malloc on buffer with use fx count word then checck NULL
**		4.3 do while same as fx "count word"
**		4.4 allocate the word of each
**		4.5 check if the word not '\0' then call fx "free" for next word
**		4.6 loop for next word 
*/

int	word_count(char const *str, char delim)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == delim)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != delim)
				str++;
		}
	}
	return (count);
}

char	*word_alloc(char const *str, char delim)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	while (str[len] && str[len] != delim)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

void	freeit(char **result, int i)
{
	while (i >= 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	result = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			result[i] = word_alloc(s, c);
			if (!result[i])
				return (freeit(result, i - 1), NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	result [i] = NULL;
	return (result);
}

/*int	main(void)
{
	char	**result;
	char	*str;
	char	delim;
	size_t	i;

	// TEST CASE 1 (space)
	str = "My name is iyz and from 42 ";
	delim = ' ';
	result = ft_split(str, delim);
	printf("sentences:- %s \ndeliminator:- [%c]\nOutcome:-", str, delim);
	i = 0;
	while (result[i])
	{
		printf("[%s]", result[i]);
		i++;
	}
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);

	// TEST CASE 2 (x)
	str = "xxxHixxByexxWhoxxarexYouxx?xx";
	delim = 'x';
	result = ft_split(str, delim);
	printf("\n\nsentences:- %s \ndeliminator:- [%c]\nOutcome:-", str, delim);
	i = 0;
	while (result[i])
	{
		printf("[%s]", result[i]);
		i++;
	}
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);

	//TEST CASE 3 (NULL)
	str = NULL;
	delim = 'x';
	result = ft_split(str, delim);
	printf("\n\nsentences:- %s \ndeliminator:- [%c]\nOutcome:-", str, delim);
	i = 0;
	printf("[%p]", result);

	return (0);
}*/