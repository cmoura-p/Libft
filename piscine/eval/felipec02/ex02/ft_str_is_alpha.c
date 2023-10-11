/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjourdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 21:46:10 by fjourdan          #+#    #+#             */
/*   Updated: 2023/07/31 13:10:48 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("so com letras %d\n", ft_str_is_alpha("teste"));
	printf("letras, numeros e simbolos %d\n", ft_str_is_alpha("asdasd--dasteste"));
	printf("vazio %d\n", ft_str_is_alpha(""));


}
