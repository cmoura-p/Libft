/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melias-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:59:21 by melias-l          #+#    #+#             */
/*   Updated: 2023/07/22 18:10:18 by melias-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char i);

int main(void)
{
	ft_putchar(-1);

	return(0);
}

void ft_putchar(char i)
{
	char c;
	if(i<0)
	{
		c = 'n';
	}
	else
	{
		c='p';
	}
	write(1, &c, 1);
}
