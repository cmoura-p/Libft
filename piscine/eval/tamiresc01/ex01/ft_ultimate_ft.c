/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcenturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:43:34 by tcenturi          #+#    #+#             */
/*   Updated: 2023/07/29 15:49:27 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	nbr;

	int	*pntr1, **pntr2, ***pntr3, ****pntr4, *****pntr5;
       	int	******pntr6, *******pntr7, ********pntr8, *********pntr9;
	
	pntr9 = &pntr8;
	pntr8 = &pntr7;
	pntr7 = &pntr6;
	pntr6 = &pntr5;
	pntr5 = &pntr4;
	pntr4 = &pntr3;
	pntr3 = &pntr2;
	pntr2 = &pntr1;
	pntr1 = &nbr;
	
	nbr = 1;
	ft_ultimate_ft(pntr9);
	printf("%d\n", nbr);
}
