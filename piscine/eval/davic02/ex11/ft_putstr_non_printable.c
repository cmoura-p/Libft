/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 03:51:23 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:51:44 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	auxiliar(char c)
{
	int	div;

	div = c + 48;
	write (1, "\\", 1);
	write (1, &div, 1);
}

void	convert_hexa(char c)
{
	char	hexa[500];
	int		temp;
	int		j;
	int		i;

	i = 0;
	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;
		hexa[i] = temp;
		i++;
		c = c / 16;
	}
	j = i - 1;
	auxiliar(c);
	while (hexa[j] != '\0')
	{
		write (1, &hexa[j], 1);
		j--;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			convert_hexa(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}

int	main(void)
{
	char	string[] = "Coucou\ntu v\ras \abin ?";

	ft_putstr_non_printable(string);
}

