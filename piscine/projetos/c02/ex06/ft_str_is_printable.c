/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:46:37 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/31 15:51:50 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
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
		flag = ft_str_is_printable(argv[1]);
	else
		flag = ft_str_is_printable("");
	printf("%d %s\n", flag, argv[1]);
	return (0);
}
*/
