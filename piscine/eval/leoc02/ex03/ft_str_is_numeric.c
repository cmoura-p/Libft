/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:01:40 by lvichi            #+#    #+#             */
/*   Updated: 2023/07/25 16:15:46 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	str_numeric;

	str_numeric = 0;
	i = 0;
	while (str[i++] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			str_numeric = 1;
		else
			str_numeric = 0;
	}
	return (str_numeric);
}

/*int	main(void)
{
	char	str[] = "123a56";
	int	i = 0;
	
	i = ft_str_is_numeric(str);
	printf("%d\n", i);
	return (0);
}*/
