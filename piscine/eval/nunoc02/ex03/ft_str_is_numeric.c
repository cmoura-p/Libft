/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nutorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:38:41 by nutorres          #+#    #+#             */
/*   Updated: 2023/08/06 13:24:06 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] < 48 || str[t] > 57)
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
	char	string[] = "12345";
	char	string1[] = "0a1b2c3";
	char	string2[] = "abcd";
	char	string3[] = "";

	printf("so numeros: %d\n", ft_str_is_numeric(string));
	printf("so numeros e letras: %d\n", ft_str_is_numeric(string1));
	printf("so letras: %d\n", ft_str_is_numeric(string2));
	printf("vazia: %d\n", ft_str_is_numeric(string3));
	return (0);
}

