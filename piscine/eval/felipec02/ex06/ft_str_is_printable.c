/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjourdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:57:05 by fjourdan          #+#    #+#             */
/*   Updated: 2023/07/31 13:17:49 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 32)
		{
			i++;
		}
		else 
		{
			return (1);
		}
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_str_is_printable("\n"));
	printf("%d\n", ft_str_is_printable("asdas92"));
	printf("%d", ft_str_is_printable(""));
}
