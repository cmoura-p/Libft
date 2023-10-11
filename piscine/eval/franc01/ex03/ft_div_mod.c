/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:28:14 by francgom          #+#    #+#             */
/*   Updated: 2023/07/24 17:39:25 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}


#include <stdio.h>


void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int aa = 5;
    int bb = 2;

    int div0;
    int rest0;

	ft_div_mod(aa,bb, &div0, &rest0);

	printf("A divisao e %i \n",div0);
    printf("O resto e %i \n",rest0);
}

