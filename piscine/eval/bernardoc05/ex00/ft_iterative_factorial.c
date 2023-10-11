/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:38:05 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 16:32:58 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		ii;

	i = 0;
	ii = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i + 1 <= nb)
	{
		++i;
		ii = ii * i;
	}
	return (ii);
}

int	main(void)
{
	int		i;

	i = 0;
	while (i < 50)
	{
		printf("!%d = %d \n", i, ft_iterative_factorial(i));
		++i;
	}
}
