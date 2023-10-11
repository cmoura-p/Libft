/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:03:28 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/03 17:26:45 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	z;
	int				x;
	int				y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	z = 1;
	while (src[y] != '\0' && z <= nb)
	{
		dest[x] = src[y];
		x++;
		y++;
		z++;
	}
	dest[x] = '\0';
	return (dest);
}

/*
#include <string.h>
int main(int argc, char **argv)
{
	unsigned int	ate;

	ate = 7;
    if (argc >1)
    {
		
        printf("%s\n", argv[1]);
        printf("%s\n", argv[2]);
        printf("Resultado do meu   %s\n", ft_strncat(argv[1], argv[2], ate));
        printf("Resultado original %s\n", strncat(argv[1], argv[2], ate));
    }
    else
        printf("Sem parametros passados\n");
    return (0);
}
*/
