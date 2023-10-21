/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:34:58 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/21 15:51:28 by Claudia M P      ###   ########.fr       */
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

	memosrc = (const char *)src;	
	memodest = (char *)dest;
	i = size;
	if (!src && !dest)
		return (NULL);
	if (memosrc < memodest)
	{
		while (i)
		{
			memodest[i] = memosrc[i];
			i--;
		}
		return (memodest);
	}
	ft_memcpy(memodest, memosrc, size);
	return (memodest);
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
int main(void)
{
	char str1[] = "Geeks";
	char str2[] = "Quiz";
	puts(str1); 
	ft_memmove(str1, str2, sizeof(str2)+1); 
	puts("\nstr1 after memmove "); 
	puts(str1);  
}
