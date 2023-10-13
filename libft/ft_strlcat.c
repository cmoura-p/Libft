/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:20:20 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/11 21:52:34 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// concatena em *dest o conteudo de *src
// retorna o tamanho total da string concatenada

#include <stdio.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t finalsize)
{
	size_t	srcsize;
	size_t	destsize;
	size_t	totsize;

	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	totsize = srcsize + destsize;
	
	printf("destino: %s\n", dest);
	printf("tamanho de src: %zu\n", srcsize);
	printf("tamanho de dst: %zu\n", destsize);
    printf("tamanho total: %zu\n", totsize);
	printf("tamanho passado: %zu\n", finalsize);
	
	if (finalsize <= totsize)
		return (totsize - (destsize-finalsize));
	srcsize = 0;
	destsize++;
	while (src[srcsize] != '\0' && destsize < finalsize)
	{
		dest[destsize] = src [srcsize];
		destsize++;
		srcsize++;
	}
	dest[destsize - 1] = '\0';
	return (totsize);
}

#include <string.h>

int main() 
{
    char *dest = "Hello, Great ";
    const char *src = "world!";
    size_t dest_size = 20;

    size_t result = ft_strlcat(dest, src, dest_size);

    if (result >= dest_size) 
	{
		printf("Estouro de buffer detectado! %zu\n", result);
		return (0);
	}
	printf("Resultado: %s\n", dest);
	return 0;
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
