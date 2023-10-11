/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-da-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 09:58:30 by ana-da-s          #+#    #+#             */
/*   Updated: 2023/07/24 16:38:12 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	inverso;

	inverso = 'z';
	while (inverso >= 'a')
	{
		write(1, &inverso, 1);
		inverso--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
