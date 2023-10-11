/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:53:15 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:27:46 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	onlyupper;

	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			onlyupper = 1;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (onlyupper);
}

#include <stdio.h>

int	main()
{
	char str[] = "STRINGUPPER";
	char str2[] = "";
	char str3[] = "1231231231";

	printf("%i\n",ft_str_is_uppercase(str));
	printf("%i\n",ft_str_is_uppercase(str2));
	printf("%i\n",ft_str_is_uppercase(str3));
}

