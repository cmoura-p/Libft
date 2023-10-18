/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:33:31 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/18 16:50:04 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*memosrc;
	unsigned char	*memodest;
	unsigned int	i;

	if (src == NULL && dest == NULL)
		return (dest);
	memosrc = (unsigned char *)src;
	memodest = (unsigned char *)dest;
	i = 0;
	while (i < size)
	{
		memodest[i] = memosrc[i];
		i++;
	}
	return (dest);
}
