/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:28:50 by francgom          #+#    #+#             */
/*   Updated: 2023/07/24 17:48:19 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str != '\0')
	{
		write(1, str[i], 1);
		i++;
	}
}


void ft_putstr(char *str);

int	main(void)
{
	char	frase[] = "BOM DIA MARIA";

	ft_putstr(frase);
}
