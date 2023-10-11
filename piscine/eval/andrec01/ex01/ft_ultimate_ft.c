/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-paiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:09:53 by ade-paiv          #+#    #+#             */
/*   Updated: 2023/07/27 13:58:53 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int     main(void) 
{
        int     num;
        int     *nbr = &num;
        int     **nbr1 = &nbr;
        int     ***nbr2 = &nbr1;
        int     ****nbr3 = &nbr2;
        int     *****nbr4 = &nbr3;
        int     ******nbr5 = &nbr4; 
        int     *******nbr6 = &nbr5;
        int     ********nbr7 = &nbr6;
        int     *********nbr8 = &nbr7;

        num = 5;
        printf("Before: %d", num);
        ft_ultimate_ft(nbr8);
        printf("After: %d", num);
}
