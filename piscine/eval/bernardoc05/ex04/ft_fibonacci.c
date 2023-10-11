/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:38:05 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 16:39:27 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int		i;

	i = 0;
	if (index < 0)
	{
		i = -1;
	}
	else if (index == 0 || index == 1)
	{
		i = index;
	}
	else
	{
		i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (i);
}

int	main(void)
{
	int		i;

	i = 0;
	while (i < 11)
	{
		printf("Fibinacci de %d = %d \n", i, ft_fibonacci(i));
		++i;
	}
}

