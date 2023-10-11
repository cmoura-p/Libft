/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalves-p <nalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:04:09 by nalves-p          #+#    #+#             */
/*   Updated: 2023/07/27 14:48:05 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0') 
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0') 
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
    char a[] = "Nuno ";
    char b[] = "Pereira";
    printf("%s \n", ft_strcat(a,b));
    printf("%s \n", strcat(a,b));
    return (0);
}
