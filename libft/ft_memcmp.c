/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.x                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:34:27 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/22 19:32:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char	*strg1;
	unsigned char	*strg2;

	strg1 = (unsigned char *)s1;
	strg2 = (unsigned char *)s2;
	if (size == 0)
		return (0);
	while (size--)
	{
		if (*strg1 != *strg2)
			return ((int)(*strg1 - *strg2));
		strg1++;
		strg2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char str1[] = "Oi, tudo bem?";
	char str2[] = "zyxbcdefgh";
	char str3[] = "abcdefgxyz";
	int result;

	result = ft_memcmp(str1, str2, 0);
	printf("Comparing str1 and str2: %d\n", result);

	result = ft_memcmp(str1, str3, 0);
	printf("Comparing str1 and str3: %d\n", result);

	return 0;
}
*/