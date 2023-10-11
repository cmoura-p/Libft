/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:38:05 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 16:38:35 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int		ii;

	ii = 1;
	if (power == 0)
	{
		return (ii);
	}
	if (power < 0)
	{
		return (0);
	}
	if (1 <= power)
	{
		ii = (ft_recursive_power(nb, power - 1));
	}
	ii = ii * nb;
	return (ii);
}

int	main(void)
{
	int		i;
	int		e;

	i = 0;
	e = 0;
	while (i < 11)
	{
		while (e < 5)
		{
			printf("%d^%d = %d \n", i, e, ft_recursive_power(i, e));
			++e;
		}
		++i;
		e = 0;
		printf("\n");
	}
}

