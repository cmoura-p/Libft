/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:54:45 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/29 13:05:55 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)
{
	int	xa;
	int	xb;

	xa = 10;
	xb = 20;
	printf("Velhos a = %i e b = %i \n", xa, xb);
	ft_swap(&xa, &xb);
	printf("a = %i e b = %i atualizados \n", xa, xb);
}
*/
