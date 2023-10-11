/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:18:32 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:22:25 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	onlynumbers;

	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			onlynumbers = 1;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (onlynumbers);
}

#include<stdio.h>
int	main()
{
	char str2[] = "";
	char str[] = "1234142141421412";

	printf("%i\n",ft_str_is_numeric(str));
	printf("%i\n",ft_str_is_numeric(str2));
}

