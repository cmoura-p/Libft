/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:20:20 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/10 17:49:10 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// concatena em *dest o conteudo de *src
// retorna o tamanho total da string concatenada

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t finalsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (finalsize <= ft_strlen(dest))
		return (finalsize + ft_strlen(dest));
	j = ft_strlen(dest);
	while (src[i] != '\0' && j + 1 < finalsize)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
