/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:21:08 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:30:35 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_is_strlowcase(char *str)
{
	char	*aux;

	aux = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (aux);
}

#include<stdio.h>
int	main()
{
	char str[] = "STRING ESTA PRONTA";
	char str2[] = "StRiNg";
	char str3[] = "1231231231";

	printf("%s\n",ft_str_is_strlowcase(str));
	printf("%s\n",ft_str_is_strlowcase(str2));
	printf("%s\n",ft_str_is_strlowcase(str3));
}

