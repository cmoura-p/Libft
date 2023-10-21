/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:44:10 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/20 21:09:43 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// concatena em *dest o conteudo de *src
// retorna o tamanho total da string concatenada

#include "libft.h"

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dest, const char *src, size_t finalsize)
{
	size_t	destsize;
	size_t	srcsize;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (!finalsize || destsize > finalsize)
		return (finalsize + srcsize);
	return (destsize + ft_strlcpy(&dest[destsize], src, finalsize - destsize));
}

#include <stdio.h>
#include "libft.h"

int main(void)
{
	char dest[10] = "Hello, ";
	char *src = "world!";
	size_t finalsize = 10;
	size_t result = ft_strlcat(dest, src, finalsize);
	printf("Result: %zu\n", result);
	printf("Dest: %s\n", dest);
	return 0;
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

