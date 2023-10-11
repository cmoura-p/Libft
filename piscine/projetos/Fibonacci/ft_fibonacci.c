/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 00:19:23 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/10 13:45:59 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	write(1, "oi\n", 3);
	index = 0;
	return (0);
}

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
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		i = ft_atoi(argv[1]);
		printf("resultado de Fibonacci de %i = %i \n", i, ft_fibonacci(i));
	}
	else
		write (1, ":(\n", 3);
	return (0);
}
