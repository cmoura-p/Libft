/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:34:12 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:25:15 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	onlylower;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			onlylower = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (onlylower);
}

#include<stdio.h>
int	main()
{
	char str[] = "string esta pronta";
	char str2[] = "";
	char str3[] = "1231231231";

	printf("%i\n",ft_str_is_lowercase(str));
	printf("%i\n",ft_str_is_lowercase(str2));
	printf("%i\n",ft_str_is_lowercase(str3));
}

