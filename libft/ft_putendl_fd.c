/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:11:15 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/20 19:11:15 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchr_fd('\n', fd);
}

//	if (s)
//	{}
/*#include <unistd.h>
#include "libft.h"

int main(void)
{
	ft_putendl_fd("Hoje eh sexta-feira, world!", 1);
	return 0;
}

void	ft_putstr_fd(char *str, int fd)
{
	int	i;
	
	if (str)
	{
		i = 0;
		while (str[i])
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
*/