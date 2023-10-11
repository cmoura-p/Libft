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

// busca o ocorrencia small na string large com o tamanho de len
// para de buscar quando encontrar '/0'
// retorna NULL se nao encontrar
// se small estiver vazio retorna a large
// se encontrar retorna o primeiro ponteiro de largest

#include "libft.h"

char	*ft_strnstr(const char *largestr, const char *smallstr, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (smallstr[0] == '\0')
		return ((char *)largestr);
	while (largestr[h] != '\0')
	{
		n = 0;
		while (largestr[h + n] == smallstr[n] && (h + n) < len)
		{
			if (largestr[h + n] == '\0' && smallstr[n] == '\0')
				return ((char *)&largestr[h]);
			n++;
		}
		if (smallstr[n] == '\0')
			return ((char *)largestr + h);
		h++;
	}
	return (0);
}
