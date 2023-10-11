/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:17:52 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/03 14:51:10 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc >1)	
	{
		printf("%s\n", argv[1]);
		printf("%s\n", argv[2]);
		printf("Resultado %d\n", ft_strcmp(argv[1], argv[2]));
		printf("Resultado %d\n", strcmp(argv[1], argv[2]));
	}
	else
		printf("Sem parametros passados\n");
	return (0);
}
*/
