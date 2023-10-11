/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:05:29 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:29:45 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_is_strupcase(char *str)
{
	char	*aux;

	aux = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (aux);
}

#include<stdio.h>
int	main()
{
	char str[] = "string esta pronta";
	char str2[] = "stRing";
	char str3[] = "1231231231";

	printf("%s\n",ft_str_is_strupcase(str));
	printf("%s\n",ft_str_is_strupcase(str2));
	printf("%s\n",ft_str_is_strupcase(str3));
}

