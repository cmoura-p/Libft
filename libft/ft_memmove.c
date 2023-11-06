/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:34:58 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/23 18:47:23 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned const char	*memosrc;
	unsigned char		*memodest;
	size_t				i;

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
