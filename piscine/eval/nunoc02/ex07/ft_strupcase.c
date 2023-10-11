/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nutorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:08:40 by nutorres          #+#    #+#             */
/*   Updated: 2023/08/06 13:35:09 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	t;

	t = 0;
	while (str[t] != '\0')
	{
		if (str[t] >= 97 && str[t] <= 122)
		{
			str[t] = str[t] - 32;
		}
		t++;
	}
	return (str);
}


#include <stdio.h>

int	main(void)
{
	char	string[] = "nuNo Santos 81";
	printf("min para mai: %s\n", ft_strupcase(string));
	return (0);
}

