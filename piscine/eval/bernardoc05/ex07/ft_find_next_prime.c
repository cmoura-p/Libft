/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:38:05 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 16:46:00 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	prime(int np)
{
	int	i;

	i = 2;
	if (np <= 1)
		return (0);
	if (np == 2)
		return (1);
	while (i <= (np / 2))
	{
		if ((np % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	if (nb % 2 == 0)
	{
		++nb;
	}
	while (nb >= 4)
	{
		if (prime(nb))
		{
			return (nb);
		}
		nb = nb + 2;
	}
	return (nb);
}

int	main(void)
{
	int		i;

	i = 0;
	while (i < 100)
	{
		printf("Next prime to %d is %d |", i, ft_find_next_prime(i));
		++i;
		if(i % 5 == 0)
		{
			printf("\n");
		}
	}
}

