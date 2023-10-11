/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:59:21 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/06 13:48:09 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	p;
	
	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			p = i / 10 + 48;
			write(1, &p, 1);
			p = i % 10 + 48;
			write(1, &p, 1);
			write(1, " ", 1);
			p = j / 10 + 48;
			write(1, &p, 1);
			p = j % 10 + 48;
 			write(1, &p, 1);
			if (i !=98)
				write(1, ", ",2);
 			j++;
		}
		i++;
	}
}
int	main(void)
{
	ft_print_comb2();
	return (0);
}
