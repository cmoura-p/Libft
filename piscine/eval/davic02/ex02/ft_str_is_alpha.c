/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:22:00 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:17:56 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	onlyletters;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			onlyletters = 1;
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			onlyletters = 1;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (onlyletters);
}

#include<stdio.h>
#include<string.h>

int	main()
{
	char str[] = "stringapenascomletras";
	char str2[] = "string com numeros, 1234";
	char str3[] = "";

	printf("%i\n",ft_str_is_alpha(str));
	printf("%i\n",ft_str_is_alpha(str2));
	printf("%i\n",ft_str_is_alpha(str3));
}

