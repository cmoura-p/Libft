/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalves-p <nalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 08:14:43 by nalves-p          #+#    #+#             */
/*   Updated: 2023/07/27 14:55:24 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0') 
		i++;
	while (j < nb && src[j] != '\0') 
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char dest[10] = "Nuno ";
	char src[10] = "Pereira";
	int size = 2;
	printf("%s \n", ft_strncat(dest, src, size));
	size = 7;
	printf("%s \n", ft_strncat(dest, src, size));
	size = 10;
	printf("%s \n", ft_strncat(dest, src, size));
}
