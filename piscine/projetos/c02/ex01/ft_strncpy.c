/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 12:16:23 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/05 20:15:54 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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


#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	origem[] = "Claudia Moura Pickett";
	char	destino[] = "Willian Walter Pickett";
	int		tamanho;
	int		i;

	tamanho = 12;
	i = 0;
	printf("destino %s \n", destino);
	printf("origem %s \n", origem);
	strncpy(destino, origem, tamanho);
	printf("do sistema %s\n",destino);	
	ft_strncpy(destino, origem, tamanho);
	printf("resultado  %s\n", destino);
	return (0);
}

