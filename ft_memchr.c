/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:35:25 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/26 15:22:10 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *strg, int p, size_t size)
{
	char		*string;

	string = (void *)strg;
	while (size--)
	{
		if (*string == (char)p)
			return ((void *)string);
		string++;
	}
	return (NULL);
}
