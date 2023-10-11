/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:00:44 by andreda-          #+#    #+#             */
/*   Updated: 2023/08/08 21:48:05 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	rvaleu;
	int	i;
	int	*dest;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	rvaleu = (max - min);
	dest = (int *)malloc(sizeof(int) * (rvaleu));
	if (dest == NULL)
		return (-1);
	i = 0;
	while (i < rvaleu)
	{
		dest[i] = min + i;
		i++;
	}
	*range = dest;
	return (i);
}

#include <stdio.h>


int	main(int argc, char **argv)
{
	//(void)argc;
	//(void)argv;
	//char *a[] = {"aaaa", "aaaa", "aaaa"};
	//char b[] = ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";
	int	*range;
	int	i;
	int	res;

	i = 0;
	res = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
	if(argc > 1)
		printf("%d\n", res); 
	while (i < res)
	{
		printf("%d\n", range[i++]);
	}
	return (0);
}

