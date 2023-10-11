/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <leovichi@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:57:04 by lvichi            #+#    #+#             */
/*   Updated: 2023/07/28 21:02:54 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') 
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "";

	printf("%d\n", ft_str_is_lowercase(str));
	return (0);
}*/
