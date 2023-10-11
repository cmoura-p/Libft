/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjourdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:11:50 by fjourdan          #+#    #+#             */
/*   Updated: 2023/07/31 13:14:35 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

#include <stdio.h>
int	main()
{
	printf("letras minusculas %d\n", ft_str_is_lowercase("aaveraa"));
	printf("minusculas e maiusculas %d\n", ft_str_is_lowercase("aaveraAa"));
	printf("vazio %d\n", ft_str_is_lowercase(""));
	printf("maiusculas %d\n", ft_str_is_lowercase("AAAAAAA"));
	printf("numeros e letras %d\n", ft_str_is_lowercase("aasd4"));


}
