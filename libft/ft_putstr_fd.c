/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:19:48 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/20 20:15:59 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar_fd(char c, int fd);

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

int	main(void)
{
	char	str[] = "Hello fucking World!";
	int		fd;

	fd = 1;
	ft_putstr_fd(str, fd);
	return (0);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
