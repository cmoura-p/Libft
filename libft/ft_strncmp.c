/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:21:37 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/17 16:32:37 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compara os ponteiros *s1 com *s2 nos primeiros n caracteres
// retorna um inteiro 0 se for ok
// retorna um menor ou maior que de pendendendo da diferenca

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && i < n) && (s1[i] == s2[i]))
	{
		i++;
	}
	if (i == n)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
