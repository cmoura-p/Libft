/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjourdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:47:44 by fjourdan          #+#    #+#             */
/*   Updated: 2023/07/31 13:16:36 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("minuscula %d\n", ft_str_is_uppercase("teste"));
	printf("maiuscula %d\n", ft_str_is_uppercase("TESTE"));
	printf("minuscula e maiuscula %d\n", ft_str_is_uppercase("Teste"));
	printf("minuscula, maiuscula e numeros %d\n", ft_str_is_uppercase("Testw2e"));
	printf("vazio %d\n", ft_str_is_uppercase(""));
}
