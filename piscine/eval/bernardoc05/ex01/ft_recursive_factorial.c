/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:38:05 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 16:35:58 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int		i;

	i = nb;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (i);
	}
	if (nb > 1)
	{
		nb = ft_recursive_factorial(nb - 1);
	}
	i = nb * i;
	return (i);
}

int	main(void)
{
	int		i;

	i = 0;
	while (i < 50)
	{
		printf("!%d = %d \n", i, ft_recursive_factorial(i));
		++i;
	}
}

