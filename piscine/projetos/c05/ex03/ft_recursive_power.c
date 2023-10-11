/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 00:09:48 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/10 00:50:45 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	num;

	i = 1;
	num = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (i <= power)
	{
		num = nb * ft_recursive_power(nb, power -1);
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
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (j % 2 != 0)
		num = num * -1;
	return (num);
}

int	main(int argc, char **argv)
{
	int	i;
	int	num;
	int	pow;

	i = 0;
	if (argc == 3)
	{
		num = ft_atoi(argv[1]);
		pow = ft_atoi(argv[2]);
		printf("potencia de %i elevado a %i ", num, pow);
		printf(" = %d\n", ft_recursive_power(num, pow));
	}
	else
	{
		write(1, ":(\n", 3);
	}
	return (0);
}
*/
