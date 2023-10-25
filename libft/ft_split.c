/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:47:00 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/25 15:49:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
		{
			count++;
			while (*s && *s == c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static size_t	word_size(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (s[size] && s[size] != c)
		size++;
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char		**lista;
	size_t		pos;
	size_t		words;
	size_t		i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	lista = (char **) ft_calloc(words + 1, sizeof(char *));
	if (!lista)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			pos = word_size(s, c);
			lista[i] = ft_substr(s, 0, pos);
			s += pos;
			i++;
		}
		else
			i++;
	}
	
	lista[words] = 0;
	return (lista);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char const *s = "This is a test string";
	char **result = ft_split(s, 'i');

	if (result == NULL)
	{
		printf("ft_split returned NULL\n");
		return (1);
	}

	for (int i = 0; result[i] != NULL; i++)
	{
		printf("%s\n", result[i]);
		free(result[i]);
	}
	free(result);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	f;

	i = start;
	if (s == NULL || len == 0 || s[i] == '\0')
		return (NULL);
	sub = (char *) malloc(len * sizeof(char));
	if (!sub)
		return (NULL);
	f = 0;
	while (f < len && s[i])
		sub[f++] = (char) s[i++];
	sub[f] = '\0';
	return (sub);
}
*/