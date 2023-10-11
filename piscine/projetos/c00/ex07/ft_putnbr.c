/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:50:44 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/06 14:05:42 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	x;

	x = nb;
	if (x < 0)
	{
		write(1, "-", 1);
		x = x * -1;
	}
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
	{
		x = x + 48; 
		write(1, &x, 1);
	}
}
int 	main(void)
{
	ft_putnbr(59);
	write(1,"\n",1);
	ft_putnbr(8759);
	write(1,"\n",1);
	ft_putnbr(-45659);
	write(1,"\n",1);
	return (0);
}

