/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-da-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:01:43 by ana-da-s          #+#    #+#             */
/*   Updated: 2023/07/24 16:48:45 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar ((a / 10) + 48);
			ft_putchar ((a % 10) + 48);
			ft_putchar (' ');
			ft_putchar ((b / 10) + 48);
			ft_putchar ((b % 10) + 48);
			if (a != 98)
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			b++;
		}
		a++;
	}
}

int main (void)
{
	ft_print_comb2();
}
