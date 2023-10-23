/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:34:58 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/22 23:55:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned const char	*memosrc;
	unsigned char		*memodest;
	size_t		i;

	memosrc = (unsigned const char *)src;
	memodest = (unsigned char *)dest;
	i = 1;
	if (memosrc < memodest) 
	{
		while (i <= size)
		{
			memodest[size - i] = memosrc[size - i];
			i++;
		}
	}
	else
		ft_memcpy(memodest, memosrc, size);
	return (memodest);
}
/*
#include <stdio.h>
#include <string.h>

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

int main(void)
{
	char str2[] = "Alessandra, ";
	char str1[] = " esta com dor ";
	puts(" destino " );
	puts(str1); 
	puts("\n origem" );
	puts(str2);
	puts("\n tamanho ");
	printf("%lu", sizeof(str2));
	ft_memmove(str1, str2, sizeof(str2)); 
	puts("\n resultado depois do memmove "); 
	puts(str1);  
}
*/