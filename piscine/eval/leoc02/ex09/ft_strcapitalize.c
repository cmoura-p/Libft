/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:39:49 by lvichi            #+#    #+#             */
/*   Updated: 2023/07/28 22:47:47 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = -1;
	new_word = 1;
	while (str[i++ + 1] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (new_word == 1)
				str[i] = str[i] - 32;
			new_word = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			new_word = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (new_word == 0)
				str[i] = str[i] + 32;
			new_word = 0;
		}
		else
			new_word = 1;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "saLut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	char    str1[] = "";
	char	str2[] = "21a";

	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	return (0);
}*/
