/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:40:16 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/09 19:54:36 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen((char *)s);
	while (size != 0 && s[size] != (char)c)
		size--;
	if (s[size] == (char)c)
		return ((char *)&s[size]);
	return (NULL);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
	char str[] = "teste";
	char *result = ft_strrchr(str, '\0');
	printf("Result: %s\n", result);
	return 0;
}
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
*/