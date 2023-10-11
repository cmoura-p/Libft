/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:45:36 by rapcampo          #+#    #+#             */
/*   Updated: 2023/08/10 18:26:14 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;

	i = -1;
	size = max - min;
	if (min >= max)
		return ((void *) 0);
	array = malloc(sizeof(int) * size);
	if (!array)
		return ((void *) 0);
	while (++i < size)
		array[i] = min++;
	return (array);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = 0;
		int min = atoi(argv[1]);
		int max = atoi(argv[2]);

		int *printme = ft_range(atoi(argv[1]), atoi(argv[2]));
		while (min < max)
		{
			printf("|[%d]|", printme[i]);
			i++;
			min++;
		}
	}
	return (0);
}
