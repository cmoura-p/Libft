/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalves-p <nalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:40:02 by nalves-p          #+#    #+#             */
/*   Updated: 2023/07/27 15:02:43 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	u;
	unsigned int	j;
	unsigned int	s;

	i = 0;
	s = 0;
	u = ft_strlen(dest);
	j = ft_strlen(src);
	if (size > u)
		s = u + j;
	else
		s = j + size;
	while (src[i] && size > (u + 1))
	{
		dest[u] = src[i];
		u++;
		i++;
	}
	dest[j] = '\0';
	return (dest[j]);
}

int main(void)
{
   	char	dest[10] = "dest";
	char	src[10] = "src";
	int	size = 6;

	printf("Dest Before: %s\n", dest);
	printf("Return of strlcat: %d\n", ft_strlcat(dest, src, size));
	printf("Return of strlcat do sistema: %d\n", strlcat(dest, src, size));
	printf("Dest after: %s\n", dest);
}
