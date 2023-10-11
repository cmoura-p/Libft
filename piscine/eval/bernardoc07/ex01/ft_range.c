/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:20:37 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 17:50:13 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	size(int min, int max)
{
	int		zize;

	zize = 0;
	if (min == -2147483648)
	{
		zize++;
		min += 1;
	}
	if (max < 0)
	{
		zize += -1 * (max - min);
	}
	else
		zize += max - min;
	return (zize);
}

int	*ft_range(int min, int max)
{
	int		*i;
	int		med;

	if (min >= max)
	{
		return (NULL);
	}
	med = size(max, min);
	i = malloc(sizeof(int) * med);
	med = 0;
	while (min != max)
	{
		i[med] = min;
		++med;
		++min;
	}
	return (i);
}

int	main(void)
{
	int		*a;
	int		i;
	int		min;
	int		max;

	i = 0;
	min = -100;
	max = 9;
	a = ft_range(min, max);
	while (i < size(min, max))
	{
		printf("%d\n", a[i]);
		++i;
	}
}

