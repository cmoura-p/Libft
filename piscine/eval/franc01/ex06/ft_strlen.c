/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:52:26 by francgom          #+#    #+#             */
/*   Updated: 2023/07/24 13:57:20 by francgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
#include <stdio.h>
#include "ft_strlen.c"

int	ft_strlen(char *str);

int	main(void)
{
	int	n;	
	char	frase[30] = "BOM DIA MARIA";

	n = ft_strlen(frase);
	printf("A string possui %i caracteres", n);

}
*/