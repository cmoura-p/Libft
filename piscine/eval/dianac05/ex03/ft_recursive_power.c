/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzinchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:41:07 by dzinchen          #+#    #+#             */
/*   Updated: 2023/08/10 15:00:21 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb <= 0 && power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	number;
	int	power;

	if (argc == 3)
	{
		number = atoi(argv[1]);
		power = atoi(argv[2]);

		printf("%i to the power of %i is %i\n", number, 
		power, ft_recursive_power(number, power));
	}
	else
		printf("Please provide two arguments\n");
}
