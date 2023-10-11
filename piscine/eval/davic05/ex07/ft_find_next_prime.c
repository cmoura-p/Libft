/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:34:54 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/09 14:52:20 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	else if (nb % 2 == 0)
		return (0);
	else
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i += 2;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_find_next_prime(32));
}

