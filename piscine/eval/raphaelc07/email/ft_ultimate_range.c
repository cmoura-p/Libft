/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:09:52 by rapcampo          #+#    #+#             */
/*   Updated: 2023/08/10 18:29:37 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	i = -1;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	if (!array)
		return (-1);
	while (min < max)
		array[++i] = min++;
	*range = array;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	int i = 0;
	int min = 2;
	int max = 21;
	int *diff;
	int size = ft_ultimate_range(&diff, min, max);
	printf("range is :");
	while (i < size)
	{
		printf("^:=%d=:^", diff[i++]);
	}
	return (0);
}
