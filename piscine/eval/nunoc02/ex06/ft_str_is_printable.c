/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nutorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:26:58 by nutorres          #+#    #+#             */
/*   Updated: 2023/08/06 13:28:20 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] < 32 || str[t] > 126)
		{
			return (0);
		}
		t++;
	}
	return (1);
}


#include <stdio.h>

int	main(void)
{
	char	string[] = "&*_#$ @!";
	char	string1[] = "aBc1234";
	char	string2[] = "\a \t \n";
	char	string3[] = "";

	printf("simbolos imprimiveis: %d\n", ft_str_is_printable(string));
	printf("so numeros e letras: %d\n", ft_str_is_printable(string1));
	printf("nao imprimiveis: %d\n", ft_str_is_printable(string2));
	printf("vazia: %d\n", ft_str_is_printable(string3));
	return (0);
}

