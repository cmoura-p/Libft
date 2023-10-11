/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:26:47 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:35:07 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int	special_caracter(char str)
{
	int	validation;
	int	i;

	i = 0;
	validation = 0;
	if ((str < '0') || (str <= 'a' && str >= 'z')
		|| (str > '9' && str < 'A')
		|| (str > 'Z' && str < 'a')
		|| (str > 'z'))
	{
		validation = 1;
	}
	return (validation);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	lowercase(str);
	i = 0;
	if (i == 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (special_caracter(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

#include<stdio.h>
int	main()
{
	char str[] = "salut, cOmment Tu vas ? 42Mmots quarante-deux; cinquate+et+un";
	char str2[] = "stRing @ esta";

	printf("%s\n",ft_strcapitalize(str));
	printf("%s\n",ft_strcapitalize(str2));
}

