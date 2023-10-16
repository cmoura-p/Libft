/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:34:58 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/16 21:08:36 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*memosrc;
	unsigned char	*memodest;
	size_t			i;

	memosrc = (unsigned char *)src;
	memodest = (unsigned char *)dest;
	i = size;
	if (src == NULL || dest == NULL)
		return (NULL);
	if (memosrc < memodest)
	{
		while (i)
		{
			i--;
			memodest[i] = memosrc[i];
		}
		return (dest);
	}
	ft_memcpy(memodest, memosrc, size);
	return (dest);
}
