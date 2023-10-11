/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:09:46 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/29 16:07:49 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
	int nbr = 0;
	int *nbr1 = &nbr;
	int **nbr2 = &nbr1;
	int ***nbr3 = &nbr2;
	int ****nbr4 = &nbr3;
	int *****nbr5 = &nbr4;
	int ******nbr6 = &nbr5;
	int *******nbr7 = &nbr6;
	int ********nbr8 = &nbr7;
	int *********nbr9 = &nbr8;
	printf("Nbr9 antes:%d\n", *********nbr9);
	ft_ultimate_ft(nbr9);
	printf("Nbr9 depois:%d", *********nbr9);
	return (0);
}
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
