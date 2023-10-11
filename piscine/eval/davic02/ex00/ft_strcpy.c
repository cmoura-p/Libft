/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:11:15 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:06:30 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*aux;

	aux = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (aux);
}

#include<stdio.h>

int	main()
{

	char source[] = "Preciso ser copiado!";
	char destine[] = "teste";

	printf("Source: %s\n",source);
	printf("Destine antes de ser copiado: %s\n",destine);
	printf("Destine apos ser copiado: %s\n",ft_strcpy(destine,source));
}
