/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:59:06 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/23 22:35:50 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	f;

	sub = (char *) malloc(len + 1);
	if (!sub || !s)
		return (0);
	i = start;
	f = 0;
	while (i < ft_strlen(s) && f < len)
		sub[f++] = s[i++];
	sub[f] = '\0';
	return (sub);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
 	const char *input_string = "hola";
    unsigned int start = 0;
    size_t length = 18446;

    char *result = ft_substr(input_string, start, length);

    if (result) {
        printf("Substring: %s\n", result);
        free(result); // Não se esqueça de liberar a memória alocada pela função ft_substr.
    } else {
        printf("Erro: a substring não pôde ser criada.\n");
    }
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