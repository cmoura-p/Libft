/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:38:05 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 16:42:07 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (i * i == nb)
		{
			return (i);
		}
		++i;
	}
	return (0);
}

int	main(void)
{
	int		i;

	i = 0;
	while (i < 101)
	{
		printf("%d is the square root of %d \n", ft_sqrt(i), i);
		++i;
	}
}

