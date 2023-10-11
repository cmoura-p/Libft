/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:00:14 by andreda-          #+#    #+#             */
/*   Updated: 2023/08/08 21:45:43 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	if (min >= max)
		return (0);
	dest = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	//(void)argv;
	//char *a[] = {"aaaa", "aaaa", "aaaa"};
	//char b[] = ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";
	int	range = (atoi(argv[2]) - atoi(argv[1]));
	int	i;
	int	*res;

	i = 0;
	res = ft_range(atoi(argv[1]), atoi(argv[2]));
//	if(argc > 1)
//		printf("%d\n", range); 
	while (i < range)
	{
		printf("%d\n", res[i]);
		i++;
	}
	return (0);
}

