/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzinchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:04:38 by dzinchen          #+#    #+#             */
/*   Updated: 2023/08/10 15:09:23 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*i <= (nb / i) makes sure the loop iterates through
possible divisors from 2 up to the square root of nb
this optimization helps reduce the number of iterations needed*/

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	number;
	
	if (argc == 2)
	{
		number = atoi(argv[1]);
		if (ft_is_prime(number) == 1)
			printf("%i is a prime number\n", number);
		else
			printf("%i is not a prime number\n", number);

	}
	else
		printf("Please provide an argument\n");
}
