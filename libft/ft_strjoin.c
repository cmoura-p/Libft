/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:24:40 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/20 11:37:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1)+ft_strlen(s2)+1));
	if (!s3)
		return (NULL);
	while (*s1)
		*s3++ = *s1++;
	while (*s2)
		*s3++ = *s2++;
	*s3 = '/0';
	return (s3);
}
int main(void) 
{
 	const char *string1 = "Olá, ";
    const char *string2 = "mundo!";

    char *result = ft_strjoin(string1, string2);

    if (result) {
        printf("String concatenada: %s\n", result);
        free(result); // Não se esqueça de liberar a memória alocada pela função ft_strjoin.
    } else {
        printf("Erro: a concatenação não pôde ser realizada.\n");
    }
}
