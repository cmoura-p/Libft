/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:21:24 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/03 17:17:20 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;
	int	ponto;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != 0)
	{
		y = 0;
		if (to_find[y] == str[x])
		{
			ponto = x;
			while (str[x] == to_find[y] && to_find[y] != '\0' && str[x] != '\0')
			{
				x++;
				y++;
			}
			if (to_find[y] == '\0')
				return (&str[ponto]);
			x = ponto;
		}
		x++;
	}
	return (0);
}
/*
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s \n", argv[1]);
		printf("%s \n", argv[2]);
		printf("Strstr criada por mim %s\n", ft_strstr(argv[1], argv[2]));
		printf("Strstr do sistema     %s\n", strstr(argv[1],argv[2]));
		return (0);
	}
}
*/
