/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzinchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:13:18 by dzinchen          #+#    #+#             */
/*   Updated: 2023/08/10 14:53:37 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		total = total * nb;
		nb--;
	}
	return (total);
}

int	main(void)
{
	int	number = 5;
	printf("%i! = %i", number, ft_iterative_factorial(number));
}
