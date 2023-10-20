/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:43:59 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/20 11:39:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s3;
	int			ini;
	int			fim;
	int			size;

	if (!s1 || !set)
		return (NULL);
	ini = 0;
	fim = ft_strlen(s1) - 1;
	while (s1[ini] == set)
		ini++;
	while (s1[fim] == set)
		fim--;
	size = fim - ini + 1;
	*s3 = (char *)malloc(size + 1);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1 + ini, size);
	return (s3);
}

int main(void)
{
 	const char *input_string = "42Olá, mundo!42";
    const char *set = "42";

    char *result = ft_strtrim(input_string, set);

    if (result) {
        printf("String após a remoção dos caracteres de set: \"%s\"\n", result);
        free(result); // Não se esqueça de liberar a memória alocada pela função ft_strtrim.
    } else {
        printf("Erro: a função ft_strtrim não pôde ser executada.\n");
    }
}