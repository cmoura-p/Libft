/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:03:04 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/10 00:42:33 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 0)
	{
		num = num * nb;
		nb--;
	}
	return (num);
}
/*
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	j = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	if (j % 2 != 0)
		num *= -1;
	return (num);
}

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
			{
				write (1, "0", 1);
				return (0);
			}
			i++;
		}
		num = ft_iterative_factorial(ft_atoi(argv[1]));
		printf("%d\n", num);
	}
	else
		write (1, "0", 1);
	return (0);
}
*/
