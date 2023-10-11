/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:20:26 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/31 15:46:16 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
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
		flag = ft_str_is_lowercase(argv[1]);
	else
		flag = ft_str_is_lowercase("");
	printf("%d %s\n", flag, argv[1]);
	return (0);
}
*/
