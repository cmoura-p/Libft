/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:05:24 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/31 16:31:27 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	checkdigit(char digit, int digitant)
{
	if (digit >= 97 && digit <= 122)
	{
		if ((digitant > 47 && digitant < 58)
			|| (digitant > 64 && digitant < 91)
			|| (digitant > 96 && digitant < 123))
			return (2);
		return (0);
	}
	else if (digit >= 65 && digit <= 90)
	{
		if ((digitant > 47 && digitant < 58)
			|| (digitant > 64 && digitant < 91)
			|| (digitant > 96 && digitant < 123))
			return (1);
		return (2);
	}
	return (2);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	digant;

	i = 0;
	digant = '*';
	while (str[i] != '\0')
	{
		if ((checkdigit(str[i], digant)) == 0)
			str[i] = str[i] - 32;
		else if ((checkdigit(str[i], digant)) == 1)
			str[i] = str[i] + 32;
		digant = str[i];
		i++;
	}
	return (str);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_strcapitalize(argv[1]);
		printf("%s \n", argv[1]);
	}
	else
		printf("sem parametros passados \n");
	return (0);
}
*/
