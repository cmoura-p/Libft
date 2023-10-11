/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda-si <linda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:56:17 by linda-si          #+#    #+#             */
/*   Updated: 2023/08/02 14:37:27 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int main (void)
{
	char src[6] = "dalia";
	char dest[6] = "";

	printf("Origem:%s - Destino:%s \n", src, dest);
	ft_strcpy(dest, src);
	printf("Origem:%s - Destino:%s \n", src, dest);
}
