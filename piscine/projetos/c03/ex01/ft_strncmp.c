/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:39:43 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/04 19:53:49 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && i < n) && (s1[i] == s2[i]))
	{
		i++;
	}
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}

/*
#include <string.h>

int	main(int argc, char **argv)
{
	unsigned int	ate;

	ate = 1;
	if (argc >1 && ate > 0)	
	{
		printf("%s\n", argv[1]);
		printf("%s\n", argv[2]);
		printf("Ate %i posicoes\n", ate);
		printf("Resultado do meu   %d\n", ft_strncmp(argv[1], argv[2], ate));
		printf("Resultado original %d\n", strncmp(argv[1], argv[2], ate));
	}
	else
		printf("Parametros invalidos\n");
	return (0);
}
*/
