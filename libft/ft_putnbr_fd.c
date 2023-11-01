/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:05:05 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/11/01 21:32:44 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = (long int)n;
	if (fd < 0)
		return ;
	if (nb < 0)
	{
		ft_putchr_fd('-', fd);
		nb = -nb;
	}
	if (nb < 10)
		ft_putchr_fd((char)(nb + '0'), fd);
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		nb = nb % 10 + '0';
		ft_putchr_fd((char)(nb), fd);
	}
}

/*
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	
}

int		main(void)
{
	ft_putnbr_fd('\0', STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_putnbr_fd(-1, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_putnbr_fd(-2147483648, STDERR_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (0);
}
*/
