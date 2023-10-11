/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-da-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:24:55 by ana-da-s          #+#    #+#             */
/*   Updated: 2023/07/24 16:42:54 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n >= 0)
	{
		write (1, &pos, 1);
	}
	else
	{
		write (1, &neg, 1);
	}
}

int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(-9);
	ft_is_negative(9);
}
