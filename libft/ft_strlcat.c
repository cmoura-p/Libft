/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:44:10 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/16 19:04:07 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// concatena em *dest o conteudo de *src
// retorna o tamanho total da string concatenada

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
