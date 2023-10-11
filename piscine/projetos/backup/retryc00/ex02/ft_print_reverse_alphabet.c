/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:35:37 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/23 14:30:13 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	fst;
	char	lst;
	char	x;

	fst = 'z';
	lst = 'a';
	x = fst;
	while (x >= lst)
	{
		write(1, &x, 1);
		x--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
