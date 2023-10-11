/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:16:30 by francgom          #+#    #+#             */
/*   Updated: 2023/07/24 17:43:19 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num;
	int	den;

	num = *a;
	den = *b;
	*a = num / den;
	*b = num % den;
}


#include <stdio.h>

int	main(void)
{
	int	aa;
	int	bb;

	aa = 5;
	bb = 2;

	printf("a = %i e b = %i \n", aa, bb);
	ft_ultimate_div_mod(&aa , &bb);
	printf("a = %i e b = %i \n", aa, bb);

}

