/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nutorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:32:45 by nutorres          #+#    #+#             */
/*   Updated: 2023/08/06 13:21:36 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	t;

	t = 0;
	while (src[t] != '\0' && t < n)
	{
		dest[t] = src[t];
		t++;
	}
	while (t < n)
	{
		dest[t] = '\0';
		t++;
	}
	return (dest);
}


#include <stdio.h>

int	main(void)    
{
	char    origem[] = "string de origem";
	char    destino[22] = "claudia moura pickett";
	unsigned int tamanho = 12;
	printf("original : %s\n", origem);
	printf("destino antes da troca : %s\n", destino);
	printf("\n");
	ft_strncpy(destino, origem, tamanho);
	printf("original depois da funcao : %s\n", origem);
        printf("tamanho do corte : %d\n", tamanho);
        printf("destino depois da funcao : %s\n", destino);
}

