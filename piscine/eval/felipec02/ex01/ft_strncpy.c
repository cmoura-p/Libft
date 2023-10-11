/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjourdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 21:22:43 by fjourdan          #+#    #+#             */
/*   Updated: 2023/07/31 13:08:14 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "Felipe Jourdan";
	char b[] = "ABCDEF";
	printf("%s\n", a);
	ft_strncpy(a, b, 6);
	printf("%s\n", a);
	strncpy(a, b, 6);
	printf("%s\n", a);
}
