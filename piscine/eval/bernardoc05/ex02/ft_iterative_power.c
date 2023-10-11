/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:38:05 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 16:37:13 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		ii;

	i = 0;
	ii = 1;
	if (power == 0)
	{
		return (ii);
	}
	if (power < 0)
	{
		return (i);
	}
	while (i + 1 <= power)
	{
		++i;
		ii = ii * nb;
	}
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
			printf("%d^%d = %d \n", i, e, ft_iterative_power(i, e));
			++e;
		}
		++i;
		e = 0;
		printf("\n");
	}
}

