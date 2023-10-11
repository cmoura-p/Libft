/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nutorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:53:24 by nutorres          #+#    #+#             */
/*   Updated: 2023/08/06 13:18:08 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	size;

	size = 0;
	while (src[size] != '\0')
	{
		dest[size] = src[size];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

#include <stdio.h>

int main (void)
{
	char orig[] = "string de origem";
	char final[] = "destino da string de origem";
	//ou posso escrever char final['colocar aqui um valor aleatorio'
	printf("original : %s\n", orig);
	printf("destino antes da troca : %s\n", final);
	printf("\n");
	ft_strcpy(final, orig);
	printf("original depois da funcao : %s\n", orig);
	printf("destino depois da funcao : %s\n", final);
}

