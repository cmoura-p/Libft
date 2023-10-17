/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:59:06 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/17 20:34:50 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	f;
	
	i = start;
	if (s == NULL || len == 0 || s[i] == '\0')
		return (NULL);
	sub = (char *) malloc(len * sizeof(char));
	if (!sub)
		return (NULL);
	f = 0;
	while (f < len && s[i])
	{
		sub[f] = (char) s[i];
		i++;
		f++;
	}
	sub[f] = '\0';
	return (ft_strdup(sub));
}
/*	nao perebo a utilizacao do ft_strdup
	aqui vou estar fazendo outro malloc
	alem de que a strdup chama strlcpy
*/