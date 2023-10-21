/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:43:59 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/21 21:50:13 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
/*	char		*s3;
	int			ini;
	int			fim;
	int			setsize;

	if (!s1 || !set)
		return (0);
	ini = 0;
	fim = ft_strlen(s1) - 1;
	while (s1[ini] == set[ini])
		ini++;
	setsize = ft_strlen(set) -1;
	while (s1[fim] == set[setsize] && setsize >= 0)
	{
		fim--;
		setsize--;
	}
	setsize = fim - ini + 1;
	s3 = (char *)malloc(setsize + 1);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1 + ini, setsize);
	return (s3);*/
}

int main(void)
{
 	const char *input_string = "242Olá, mundo!424242";
    const char *set = "42";

    char *result = ft_strtrim(input_string, set);

    if (result) {
        printf("String após a remoção dos caracteres de set: \"%s\"\n", result);
        free(result); // Não se esqueça de liberar a memória alocada pela função ft_strtrim.
    } else {
        printf("Erro: a função ft_strtrim não pôde ser executada.\n");
    }
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
char	*ft_strchr(const char *s, int c)
{
	char	find_c;

	find_c = c;
	while (*s != find_c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}


size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}