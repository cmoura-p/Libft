/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:02:19 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/22 17:48:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*numbuild(long int num, int i)
{
	char	*numstr;

	numstr = (char *)malloc(i + 1);
	if (numstr == NULL)
		return (NULL);
	if (num < 0)
	{
		numstr[0] = '-';
		num *= -1;
		i++;
	}
	numstr[i + 1] = '\0';
	while (num > 0)
	{
		numstr[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	return (numstr);
}

int	numsize(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	num;

	num = n;
	i = numsize(num);
	i--;
	str = (char *)numbuild(num, i);
	return (str);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%s\n", ft_itoa(698));
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(98765));
	printf("%s\n", ft_itoa(0000));
	printf("%s\n", ft_itoa(-8785));
	printf("%s\n", ft_itoa(0));
	return (0);
}
*/
