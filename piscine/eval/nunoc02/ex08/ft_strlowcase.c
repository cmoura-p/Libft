/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nutorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:01:32 by nutorres          #+#    #+#             */
/*   Updated: 2023/08/06 13:36:00 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] >= 65 && str[t] <= 90)
		{
			str[t] = str[t] + 32;
		}
		t++;
	}
	return (str);
}


#include <stdio.h>

int	main(void)
{
	char	string[] = "NUNo SaNTOs 81";

	printf("min para mai: %s\n", ft_strlowcase(string));
	return (0);
}

