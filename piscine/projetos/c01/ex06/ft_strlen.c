/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:43:49 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/29 13:33:48 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	int	n;
	char	*frase;

	frase = "Claudia Moura Pickett";
	n = ft_strlen(frase);
	printf("%s \n", frase);
	printf("A frase possui %i caracteres \n", n);
	return (0);
}
*/
