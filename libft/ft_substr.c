/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:59:06 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/21 21:02:32 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "libft.h"
 
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	f;

	i = start;
	if (s == NULL || len == 0 || s[i] == '\0')
		return (NULL);
	sub = (char *) malloc(len * sizeof(char));
	if (!sub)
		return (NULL);
	f = 0;
	while (f < len && s[i])
		sub[f++] = (char) s[i++];
	sub[f] = '\0';
	return (sub);
}

int main(void)
{
 	const char *input_string = "Esta é uma string de teste";
    unsigned int start = 10;
    size_t length = 8;

    char *result = ft_substr(input_string, start, length);

    if (result) {
        printf("Substring: %s\n", result);
        free(result); // Não se esqueça de liberar a memória alocada pela função ft_substr.
    } else {
        printf("Erro: a substring não pôde ser criada.\n");
    }
}