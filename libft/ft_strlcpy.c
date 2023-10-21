/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:00:11 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/20 21:07:48 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copia em *dest o conteudo de *src
// retorna o tamanho total da string copiada

#include "libft.h"
size_t	ft_strlen(const char *str);

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
#include <stdio.h>
#include "libft.h"

int main(void)
{
	char src[] = "Helo, world!";
	char dest[14];
	size_t size = ft_strlcpy(dest, src, sizeof(dest));
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("size: %zu\n", size);
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
