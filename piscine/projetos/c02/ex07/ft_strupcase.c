/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:18:41 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/31 15:53:47 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_strupcase(argv[1]);
		printf("%s \n", argv[1]);
	}
	else 
		printf("sem parametros passados \n");
	return (0);
}
*/
