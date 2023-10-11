/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nutorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:02:09 by nutorres          #+#    #+#             */
/*   Updated: 2023/08/06 13:27:09 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] < 65 || str[t] > 90)
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
	char	string[] = "ABCD";
	char	string1[] = "aBc";
	char	string2[] = "abcd";
	char	string3[] = "";

	printf("so maiusculas: %d\n", ft_str_is_uppercase(string));
	printf("so numeros e letras: %d\n", ft_str_is_uppercase(string1));
	printf("so minusculas: %d\n", ft_str_is_uppercase(string2));
	printf("vazia: %d\n", ft_str_is_uppercase(string3));
	return (0);
}

