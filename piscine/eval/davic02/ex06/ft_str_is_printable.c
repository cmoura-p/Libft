/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:59:05 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:28:27 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	onlyprintable;

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			onlyprintable = 1;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (onlyprintable);
}

#include<stdio.h>

int	main()
{
	char str[] = "string esta pronta";
	char str2[] = "stRing";
	char str3[] = "1231231¢231";

	printf("%i\n",ft_str_is_printable(str));
	printf("%i\n",ft_str_is_printable(str2));
	printf("%i\n",ft_str_is_printable(str3));
}

