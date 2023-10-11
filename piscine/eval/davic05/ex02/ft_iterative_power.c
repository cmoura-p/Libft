/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:17:53 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/09 14:33:08 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while (power >= 1)
		{
			res = res * nb;
			power--;
		}
	}
	return (res);
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_power(3, 2));
}
