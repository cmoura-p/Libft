/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 09:40:07 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/07/23 18:21:47 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	while (f <= '7')
	{
		s = f + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				write (1, &f, 1);
				write (1, &s, 1);
				write (1, &t, 1);
				if (f < '7')
					write (1, ", ", 1);
				t++;
			}
			s++;
		}
		f++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
