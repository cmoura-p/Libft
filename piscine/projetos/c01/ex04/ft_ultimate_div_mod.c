/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:07:55 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/29 13:20:08 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	resto;

	div = *a / *b;
	resto = *a % *b;
	*a = div;
	*b = resto;
}

/*
int	main(void)
{
	int	x1;
	int	x2;

	x1 = 44;
	x2 = 7;
	printf("Na ida: dividendo = %i e divisor = %i \n", x1, x2);
	ft_ultimate_div_mod(&x1, &x2);
	printf("Na volta: resultado = %i e resto = %i \n", x1, x2);
	return (0);
}
*/
