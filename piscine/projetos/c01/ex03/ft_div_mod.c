/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:02:52 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/29 13:18:28 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	pa;
	int	pb;
	int	div;
	int	resto;

	pa = 10;
	pb = 6;
	ft_div_mod(pa, pb, &div, &resto);
	printf("Resultado da divisao %i \n", div);
	printf("Resto da divisao %i \n", resto);
	return (0);
}
*/
