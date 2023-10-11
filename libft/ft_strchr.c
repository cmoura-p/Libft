/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:36:04 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/09 15:36:04 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// busca a primeira ocorrencia da variavel c na string *s
// retorna NULL se nao encontrar
// retorna o ponteiro do caracte correspondente
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	find_c;

	find_c = c;
	while (*s != find_c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
