/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:03:24 by francgom          #+#    #+#             */
/*   Updated: 2023/07/24 15:13:21 by francgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int f;
	int aux;

	i = 0;
	f = size -1;

	while(i < f)
	{
		aux = tab[i];
		tab[i] = tab[f];
		tab[f] = aux;
		i++;
		f--;
	}
}

/*
#include <stdio.h>
#include "ft_rev_int_tab.c"

#define N 5

void	ft_rev_int_tab(int *tab, int size);

void	imprimir_array(int *v, int size)
{
	int	i;
	i = 0;
	printf("\nArray: \n");
	while (i <=size)
	{
		printf(" %i", v[i]);
		i++;
	}
}


int	main(void)
{

	int num[N] = {10, 20, 30, 40, 50};
	imprimir_array(num, N-1);
	ft_rev_int_tab(num, N-1);
	imprimir_array(num, N-1);

}
*/