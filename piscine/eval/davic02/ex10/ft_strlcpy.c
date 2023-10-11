/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:37:31 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:38:22 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i <= size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}

#include<bsd/string.h>
#include<stdio.h>
// tem que compilar com cc -lbsd

int	main(void)
{
	char	source[] = "eu tenho 21 caracters";
	char	destination[] = "will truncate source";
	unsigned int	length; // utilizado com a funcao ft_strlcpy
//	unsigned int	length2; // utilizado com a funcao strlcpy
	length = ft_strlcpy(destination,source,5);
//	length2 = strlcpy(destination,source,5);
	printf("%u\n",length);
//	printf("%u\n",length2);
	printf("%s\n",destination);
}

