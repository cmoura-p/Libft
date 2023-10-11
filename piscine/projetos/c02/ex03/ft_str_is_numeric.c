/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:06:04 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/31 15:43:50 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else 
			return (0);
	}
	return (1);
}

/*
int	main(int argc, char **argv)
{
	int	flag;

	if (argc > 1)
	{
		flag = ft_str_is_numeric(argv[1]);
		printf("%d %s\n", flag, argv[1]);
	}
	return (0);
}
*/
