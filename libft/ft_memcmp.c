/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:34:27 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/20 18:45:05 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char	*strg1;
	unsigned char	*strg2;
	
	strg1 = (unsigned char *)s1;
	strg2 = (unsigned char *)s2;
	if (size == 0 || strg1 == NULL || strg2 == NULL)
		return (*strg1 - *strg2);
	while (size--)
	{
		if (*strg1 != *strg2)
			return ((int)(*strg1 - *strg2));
		strg1++;
		strg2++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char str1[] = "";
	char str2[] = "Hello, world!";
	char str3[] = "Hello, worldx";
	int result;

	result = ft_memcmp(str1, str2, strlen(str1));
	printf("Comparing str1 and str2: %d\n", result);

	result = ft_memcmp(str1, str3, strlen(str1));
	printf("Comparing str1 and str3: %d\n", result);

	return 0;
}
