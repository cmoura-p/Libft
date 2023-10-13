/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copiadostrlcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:44:10 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/13 10:44:21 by Claudia M P      ###   ########.fr       */
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