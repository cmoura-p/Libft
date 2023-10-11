/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcenturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:02:49 by tcenturi          #+#    #+#             */
/*   Updated: 2023/07/29 15:50:36 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}

int	main()
{
	int	a, b;

	a = 26;
	b = 27;
	printf("Before\n %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("After\n %d %d\n", a, b);
}
