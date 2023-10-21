/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:02:19 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/20 18:28:41 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			negativo;
	long int	num;

	num = n;
	i = 0;
	negativo = 0;
	if (num < 0)
	{
		negativo = 1;
		num = num * -1;
		i = 1;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	while (i-- > 0)
	{
		str[i] = num % 10 + '0';
		num = num / 10;
	}
	if (negativo)
		str[0] = '-';
	return (str);
}
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int	main(void)
{
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(0));
	return (0);
}
