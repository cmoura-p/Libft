/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcenturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:11:07 by tcenturi          #+#    #+#             */
/*   Updated: 2023/07/29 15:52:57 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num_a;
	int	num_b;

	num_a = *a;
	num_b = *b;
	*a = num_a / num_b;
	*b = num_a % num_b;
}

int	main(void)
{
	int	a;
       	int	b;
	a = 20;
	b = 10;

	ft_ultimate_div_mod (&a, &b);
	printf(" div:%d\n mod:%d\n", a, b);
}
