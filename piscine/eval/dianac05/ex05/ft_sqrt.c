/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzinchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:21 by dzinchen          #+#    #+#             */
/*   Updated: 2023/08/10 15:07:17 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	odd;
	int	count;

	odd = 1;
	count = 0;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		nb -= odd;
		count++;
		odd += 2;
	}
	if (nb == 0)
		return (count);
	return (0);
}

int	main(int argc, char **argv)
{
	int	number;
	
	if (argc == 2)
	{
		number = atoi(argv[1]);
		printf("The square root of %i is %i\n", number, ft_sqrt(number));
	}
	else
		printf("Please provide one argument of type int\n");
}
