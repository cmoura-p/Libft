/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:59:11 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/24 13:20:42 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	fst;
	char	lst;
	char	x;

	fst = 'a';
	lst = 'z';
	x = fst;
	while (x <= lst)
	{
		write(1, &x, 1);
		x++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
