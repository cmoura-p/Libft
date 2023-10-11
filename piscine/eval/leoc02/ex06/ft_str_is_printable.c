/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:12:43 by lvichi            #+#    #+#             */
/*   Updated: 2023/07/28 21:20:22 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127) 
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "";

	printf("%d\n", ft_str_is_printable(str));
	return (0);
}*/
