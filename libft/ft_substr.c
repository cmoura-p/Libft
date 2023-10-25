/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:59:06 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/24 22:48:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t size);*/

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
		ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}

/*
int main(void)
{
 	const char *input_string = "hola";
    unsigned int start = 4;
    size_t length = 20;

    char *result = ft_substr(input_string, start, length);

    if (result) {
        printf("Substring: %s\n", result);
        free(result); // Não se esqueça de liberar a memória alocada pela função ft_substr.
    } else {
        printf("Erro: a substring não pôde ser criada.\n");
    }
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