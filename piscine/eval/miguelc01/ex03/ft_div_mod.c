/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:25:32 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/29 16:11:08 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int    a = 9;
	int    b = 4;
	int    div = 0;
	int    mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("Div:%d\nMod:%d", div, mod);
	return (0);
}
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
