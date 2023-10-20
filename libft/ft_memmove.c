/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:34:58 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/20 11:02:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>


void	*ft_memcpy(void *dest, const void *src, size_t size);

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	const char	*memosrc;
	char		*memodest;
	size_t		i;

	memosrc = (const char *)src;	memodest = (char *)dest;
	i = size;
	if (!src || !dest)
		return (NULL);
	if (memosrc < memodest)
	{
		while (i)
		{
			i--;
			memodest[i] = memosrc[i];
		}
		return (memodest);
	}
	ft_memcpy(memodest, memosrc, size);
	return (memodest);
}

int main(void) 
{
    // Exemplo com memmove
    char s[] = "ABCDEFG";
	char d[] = "HIJKLMNOPQ";
    ft_memmove(d, s, 8);
    printf("Exemplo com memmove: %s\n", d);
}
