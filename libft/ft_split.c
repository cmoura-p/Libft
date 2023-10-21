/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:47:00 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/21 19:55:38 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

static size_t count_words(char const *s, char c)
{
	int count;

	count = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s == c)
		{
			count++;
			while (*s && *s == c)
				s++;
		}
		while (*s && *s != c)
			s++;
	}
	if (*(s - 1) != c)
		count++;
	return (count);
}
static size_t	word_position(char const *s, char c)
{
	size_t	position;

	position = 0;
	while (*s && *s != c)
	{
		position++;
		s++;
	}
	return (position);
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
	lista = malloc(sizeof(char *) * (words + 1));
	if (!lista)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		pos = word_position(s, c);
		lista[i] = ft_substr(s, 0, pos);
		s += pos + 1;
		i++;
	}
	lista[words] = NULL;
	return (lista);
}
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
