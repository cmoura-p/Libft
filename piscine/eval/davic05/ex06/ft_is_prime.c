/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:09:08 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/09 14:48:39 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
	{
		return (0);
	}
	else if (nb == 2 || nb == 3)
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

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_is_prime(4));
    printf("%i\n", ft_is_prime(7));
    printf("%i\n", ft_is_prime(19));
	printf("%i\n", ft_is_prime(24));
}

