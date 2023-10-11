/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-da-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:06:15 by ana-da-s          #+#    #+#             */
/*   Updated: 2023/07/24 16:39:06 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	numeros;

	numeros = '0';
	while (numeros <= '9')
	{
		write(1, &numeros, 1);
		numeros++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
