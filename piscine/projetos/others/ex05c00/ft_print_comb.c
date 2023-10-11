/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:34:40 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/20 19:32:44 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	dig1;
	char	dig2;
	char	dig3;

	dig1 = '0';
	dig2 = dig1 + 1;
	dig3 = dig2 + 1;
	while (dig1 <= '9')
	{
		while (dig2 <= '9')
		{
			while (dig3 <= '9')
			{
				write(1, &dig1, 1);
				write(1, &dig2, 1);
				write(1, &dig3, 1);
				write(1, ",", 1);
				dig3++;
			}
			dig2++;
			dig3 = dig2 + 1;
		}
		dig1++;
		dig2 = dig1 + 1;
	}
}

int	main(void)
{
	ft_print_comb();

}
