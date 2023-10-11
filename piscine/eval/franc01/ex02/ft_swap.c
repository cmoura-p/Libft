/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:27:28 by francgom          #+#    #+#             */
/*   Updated: 2023/07/24 17:35:47 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}


#include <stdio.h>

void	ft_swap(int *a, int *b);
	
int main(void)
	{
	int aa;
	int bb;
	aa = 10;
	bb = 20;
	printf("a = %i e b = %i \n", aa, bb);
	ft_swap(&aa,&bb);
	printf("a = %i e b = %i \n", aa, bb);
	}

