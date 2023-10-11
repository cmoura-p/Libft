/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nutorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:32:30 by nutorres          #+#    #+#             */
/*   Updated: 2023/08/06 13:23:07 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if ((str[t] < 65 || str[t] > 90) && (str[t] < 97 || str[t] > 122))
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
	char	string[] = "abcdf";
	char	string1[] = "ABCDF";
	char	string2[] = "abCDe";
	char	string3[] = "abc123";
	char	string4[] = "abc=-+";
	char	string5[] = "";

	printf("so char min: %d\n", ft_str_is_alpha(string));
	printf("so char mai: %d\n", ft_str_is_alpha(string1));
	printf("so char min e mai: %d\n", ft_str_is_alpha(string2));
	printf("char min e num: %d\n", ft_str_is_alpha(string3));
	printf("char e simbolos: %d\n", ft_str_is_alpha(string4));
	printf("vazia: %d\n", ft_str_is_alpha(string5));
	return (0);
}

