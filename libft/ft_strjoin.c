/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                     				  +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:24:40 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/20 20:52:26 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	s3 = (char *) malloc(ft_strlen(s1)+ft_strlen(s2)+1);
	if (!s3)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 [j] != '\0')
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3 [i] = '\0';
	return (s3);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *s3 = ft_strjoin(s1, s2);
	if (s3)
	{
		printf("%s\n", s3);
		free(s3);
	}
 	const char *string1 = "Olá, ";
    const char *string2 = "mundo!";

   char *result = ft_strjoin(string1, string2);

    if (result) {
        printf("String concatenada: %s\n", result);
        free(result); // Não se esqueça de liberar a memória alocada pela função ft_strjoin.
    } else {
        printf("Erro: a concatenação não pôde ser realizada.\n");
    }
	return (0);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
*/