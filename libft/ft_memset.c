/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:32:35 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/16 20:58:55 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int p, size_t size)
{
	unsigned int	i;
	unsigned char	*memo;

	i = 0;
	memo = dest;
	while (i < size)
	{
		memo[i] = p;
		i++;
	}
	return (memo);
}
