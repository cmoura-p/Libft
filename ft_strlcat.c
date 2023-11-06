/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:44:10 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/22 01:43:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t finalsize)
{
	size_t	destsize;
	size_t	srcsize;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (!finalsize || destsize > finalsize)
		return (finalsize + srcsize);
	return (destsize + ft_strlcpy(&dest[destsize], src, finalsize - destsize));
}
