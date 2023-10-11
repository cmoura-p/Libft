/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:20:37 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 17:51:26 by cmoura-p         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int		med;
	int		i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	med = size(max, min);
	*range = malloc(sizeof(int) * med);
	if (!range || !range[0])
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		++i;
		++min;
	}
	return (med);
}

int	main(void)
{
	int		i;
	int		min;
	int		*rest;
	int		max;

	i = 0;
	min = -100;
	max = 9;
	ft_ultimate_range(&rest, min, max);
	while (i < size(min, max))
	{
		printf("%d\n", rest[i]); 
		++i;
	}
}

