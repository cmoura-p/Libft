/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:23:38 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/31 13:40:39 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

/*
int	main(void)
{
	char	origem[] = "tou estudando abcdefg";
	char	destino[1];
	int	i;
	
	i = 0;
	ft_strcpy(destino, origem);
	while (destino[i] != '\0')
		i++;
	write(1, destino, i);
	return (0);
}
*/
