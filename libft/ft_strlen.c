/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:25:51 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/10 17:49:30 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calcula o tamnho do ponteiro *str e retorna o valor

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
