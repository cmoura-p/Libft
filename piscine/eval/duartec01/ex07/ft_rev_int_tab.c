/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-alme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 22:31:34 by dde-alme          #+#    #+#             */
/*   Updated: 2023/08/06 12:19:27 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < (size / 2))
	{
		b = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = b;
		a++;
	}
}

int	main(void)
{
	int	tab[4] = {1, 2, 3, 4};
	int	size = 4;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}
