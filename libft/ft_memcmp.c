/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:34:27 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/16 21:06:36 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char	*strg1;
	unsigned char	*strg2;

	strg1 = (unsigned char *)s1;
	strg2 = (unsigned char *)s2;
	if (size == 0 || strg1 == NULL || strg2 == NULL)
		return (0);
	while (size-- > 0)
	{
		if (*strg1 != *strg2)
			return ((int)(*strg1 - *strg2));
		strg1++;
		strg2++;
	}
	return (0);
}
