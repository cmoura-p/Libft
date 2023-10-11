/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nutorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:41:11 by nutorres          #+#    #+#             */
/*   Updated: 2023/08/06 13:26:17 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] < 97 || str[t] > 122)
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

	printf("so maiusculas: %d\n", ft_str_is_lowercase(string));
	printf("minusculas e maiusculas: %d\n", ft_str_is_lowercase(string1));
	printf("so minusculas: %d\n", ft_str_is_lowercase(string2));
	printf("vazia: %d\n", ft_str_is_lowercase(string3));
	return (0);
}

