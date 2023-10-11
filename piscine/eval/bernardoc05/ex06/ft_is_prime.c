/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:38:05 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 16:44:19 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int np)
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

int	main(void)
{
	int		i;

	i = 0;
	while (i < 101)
	{
		printf("%d =|+|= %d \n", i, ft_is_prime(i));
		++i;
	}
}

