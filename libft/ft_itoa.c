/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:02:19 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/18 19:58:02 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	num;

	num = n;
	i = 0;
	if (num < 0)
		num = num * -1;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	str = (char *)malloc(sizeof(char)) * (i + 1);
	while (i-- > 0)
	{
		str[i] = num % 10;
		num = num / 10;
	}
	return (str + '/0');
}
