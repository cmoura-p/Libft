/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda-si <linda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:56:57 by linda-si          #+#    #+#             */
/*   Updated: 2023/08/02 14:40:27 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
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
int main(void)
{
	char src[5] = "dalia";
	char dest[50] = "claudia moura";

	printf("Source:%s - Destino:%s \n", src, dest);
	ft_strncpy(dest,src,3);
	printf("Source:%s - Destino:%s", src, dest);
	return (0);
}
