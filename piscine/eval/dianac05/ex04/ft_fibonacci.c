/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzinchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:02:05 by dzinchen          #+#    #+#             */
/*   Updated: 2023/08/10 15:03:31 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}

int	main(int argc, char **argv)
{
	int	index;
	
	if (argc == 2)
	{
		index = atoi(argv[1]);
		printf("%i\n", ft_fibonacci(index));
	}
	else
		printf("Please provide an argument\n");
	return (0);
}
