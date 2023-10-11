/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzinchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:13:27 by dzinchen          #+#    #+#             */
/*   Updated: 2023/08/10 14:58:44 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	total;

	total = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		total = total * nb;
		power--;
	}
	return (total);
}

int	main(int argc, char *argv[])
{
	int	number;
	int	power;

	if (argc == 3)
	{
		number = atoi(argv[1]);
		power = atoi(argv[2]);

		printf("%i to the power of %i is %i\n"
		, number, power, ft_iterative_power(number, power));
	}
	else
	{	
		printf("Please provide two arguments\n");
	}
}
