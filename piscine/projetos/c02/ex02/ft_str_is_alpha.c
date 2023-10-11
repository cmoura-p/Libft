/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:11:56 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/31 15:41:14 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int     main(int argc, char **argv)
{
	int	flag;

	flag = 1;
	if (argc > 1)
	{
		flag = ft_str_is_alpha(argv[1]);
		printf("%i %s\n", flag, argv[1]);
	}
	return (0);

}
*/
