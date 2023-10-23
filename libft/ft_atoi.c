/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:26:24 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/22 01:20:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - 48);
		str++;
	}
	return (num * sign);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *str1 = "12345";
	char *str2 = "-6789";
	char *str3 = "  \t\n\v\f\r 42";
	char *str4 = "invalid";

	printf("ft_atoi(\"%s\") = %d\n", str1, ft_atoi(str1));
	printf("ft_atoi(\"%s\") = %d\n", str2, ft_atoi(str2));
	printf("ft_atoi(\"%s\") = %d\n", str3, ft_atoi(str3));
	printf("ft_atoi(\"%s\") = %d\n", str4, ft_atoi(str4));

	return 0;
}
*/