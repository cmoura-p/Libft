/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:47:00 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/26 16:38:44 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

void	*ft_memset(void *dest, int p, size_t size);
void	ft_bzero(void *b, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t size);
char	*ft_strdup(const char *str);

static size_t	segm_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static size_t	segm_size(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (s[size] && s[size] != c)
		size++;
	return (size);
}

static char	**freelist(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**lista;
	size_t		i;
	size_t		j;

	lista = (char **) ft_calloc((segm_count(s, c) + 1), sizeof(char *));
	if (!lista || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			lista[j] = ft_substr(s, i, segm_size(&s[i], c));
			if (!lista[j])
				return (freelist(lista, j));
			j++;
			i += segm_size(&s[i], c);
		}
		else
			i++;
	}
	lista[j] = 0;
	return (lista);
}

/*
int main(void)
{
	char const *s = "  tripouille  42  ";
	char **result = ft_split(s, ' ');

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
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (len > (size - start))
		len = size - start;
	sub = (char *) malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	if (s[start])
		ft_memcpy(sub, s + start, len + 1);
	sub[len] = '\0';
	return (sub);
}
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

void	ft_bzero(void *b, size_t len)
{
	ft_memset(b, 0, len);
}

void	*ft_memset(void *dest, int p, size_t size)
{
	size_t			i;
	unsigned char	*memo;

	i = 0;
	memo = (unsigned char *)dest;
	while (i < size)
		memo[i++] = p;
	return (memo);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(str) + 1;
	ptr = (char *) malloc(size * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, str, size);
	return ((char *) ptr);
}

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;

	if (!src && !dest)
		return (dest);
	i = 0;
	while (i < size)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}
*/
