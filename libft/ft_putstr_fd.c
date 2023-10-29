/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:19:48 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/29 19:57:35 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	write (fd, str, ft_strlen(str));
}

//	int	i;
//
//	if (str)
//	{
//		i = 0;
//		while (str[i])
//		{
//			ft_putchar_fd(str[i], fd);
//			i++;
//		}
//	}