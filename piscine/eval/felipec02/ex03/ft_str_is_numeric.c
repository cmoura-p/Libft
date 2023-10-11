/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjourdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:49:53 by fjourdan          #+#    #+#             */
/*   Updated: 2023/07/31 13:13:34 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
int main(void)
{

	printf("so numeros %d\n", ft_str_is_numeric("333333"));
	printf("numeros, letras e simbolos %d\n", ft_str_is_numeric("33a33-33"));
	printf("vazio %d", ft_str_is_numeric(""));
}
