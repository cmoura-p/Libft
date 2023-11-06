/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:39:30 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/09 15:39:30 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *strl, const char *strs, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (strs[0] == '\0')
		return ((char *)strl);
	while (strl[i] != '\0')
	{
		n = 0;
		while (strl[i + n] == strs[n] && (i + n) < size)
		{
			if (strl[i + n] == '\0' && strs[n] == '\0')
				return ((char *)&strl[i]);
			n++;
		}
		if (strs[n] == '\0')
			return ((char *)strl + i);
		i++;
	}
	return (0);
}
