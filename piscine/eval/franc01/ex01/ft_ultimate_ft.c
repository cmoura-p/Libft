/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:30:29 by francgom          #+#    #+#             */
/*   Updated: 2023/07/24 15:03:08 by francgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int n;

	n = 10;

	int *p1;
	int **p2;
	int ***p3;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;
	int *********p9;

	p9 = &p8;
	p8 = &p7;
	p7 = &p6;
	p6 = &p5;
	p5 = &p4;
	p4 = &p3;
	p3 = &p2;
	p2 = &p1;
	p1 = &n;
	
	printf("valor original %i \n",n);
	ft_ultimate_ft(p9);
	printf("Novo valor %i",n);
}
