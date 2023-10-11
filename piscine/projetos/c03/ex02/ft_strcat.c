cd/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:49:15 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/03 15:24:14 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

/*
#include <string.h>

int main(int argc, char **argv)
{
    if (argc >1)
    {
        printf("%s\n", argv[1]);
        printf("%s\n", argv[2]);
        printf("Resultado do meu   %s\n", ft_strcat(argv[1], argv[2]));
        printf("Resultado original %s\n", strcat(argv[1], argv[2]));
    }
    else
        printf("Sem parametros passados\n");
    return (0);
}
*/
