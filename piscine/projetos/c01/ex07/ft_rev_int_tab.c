/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:30:26 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/30 13:45:53 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	up;
	int	down;
	int	var;

	var = 0;
	up = 0;
	down = size - 1;
	while (up < size / 2)
	{
		var = tab[up];
		tab[up] = tab[down];
		tab[down] = var;
		up++;
		down--;
	}
}

int	main(void)
{
	int	vetor[7];
		
	vetor[0] = 12;
	vetor[1] = 33;
	vetor[2] = 13;
	vetor[3] = 64;
	vetor[4] = 88;
	vetor[5] = 27;
	vetor[6] = 75;
	
	printf("%i %i %i %i %i %i %i\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], vetor[6]);
	ft_rev_int_tab(vetor, 7);
	printf("%i %i %i %i %i %i %i\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], vetor[6]);
	return (0);
}

