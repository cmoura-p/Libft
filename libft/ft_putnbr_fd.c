/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:05:05 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/20 11:32:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		n = n + '0';
		write(1, &n, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		n = n % 10 + '0';
		write(1, &n, 1);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
			num = num * 10 + str[i] - '0';
		else
		{
			write(1, ":(\n", 3);
			return (0);
		}
		i++;
	}
	if (str[0] == '-')
		num = num * -1;
	return (num);
}

int	main(int argc, char **argv)
{
	int	x;

	if (argc == 2)
	{
		x = (ft_atoi(argv[1]));
		ft_putnbr(x);
		write (1, "\n", 1);
	}
	else
		write (1, ":(\n", 3);
	return (0);
}
