/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:25:36 by dde-alme          #+#    #+#             */
/*   Updated: 2023/08/06 12:21:32 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	while (size >= 0)
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				b = tab[a];
				tab[a] = tab[a + 1];
				tab [a + 1] = b;
			}
			a++;
		}
		size--;
	}
}

int	main(void)
{
	int	tab[5] = {12, -7, 0, 3, -4};
	int	size = 5;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
