/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:40:06 by dmeirele          #+#    #+#             */
/*   Updated: 2023/08/09 14:44:51 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;
	long int	n;

	n = nb;
	i = 0;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	if (n >= 2)
	{
		while (i * i <= n)
		{
			if (i * i == n)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-5));
	printf("%d\n", ft_sqrt(6 * 6));
	printf("%d\n", ft_sqrt(7 * 7));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2058910729));
	printf("%d\n", ft_sqrt(46340 * 46340));
	printf("%d\n", ft_sqrt(2147483647));
}

