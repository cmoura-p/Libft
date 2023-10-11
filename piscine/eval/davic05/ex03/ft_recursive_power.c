/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:50:17 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/09 14:34:13 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
		res = nb * ft_recursive_power(nb, power - 1);
	}
	return (res); 
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_recursive_power(2, 3));
}

