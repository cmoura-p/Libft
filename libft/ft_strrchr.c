/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:40:16 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/09 19:54:36 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// busca a ultima ocorrencia da variavel c na string *s
// retorna NULL se nao encontrar
// retorna o ponteiro do caracte correspondente

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	find_c;
	char	*found_c;
	int		s_len;

	find_c = c;
	found_c = NULL;
	s_len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + s_len);
	while (*s)
	{
		if (*s == find_c)
			found_c = (char *) s;
		s++;
	}
	return ((char *)found_c);
}
