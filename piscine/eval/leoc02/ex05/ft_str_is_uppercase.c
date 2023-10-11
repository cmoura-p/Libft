/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:04:55 by lvichi            #+#    #+#             */
/*   Updated: 2023/07/28 21:09:39 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z') 
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "1654";

	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}*/
