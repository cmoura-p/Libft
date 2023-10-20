/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:02:19 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/20 00:19:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			negativo;
	long int	num;

	num = n;
	i = 0;
	negativo = 0;
	if (num < 0)
	{
		negativo = 1;
		num = num * -1;
		i = 1;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	while (i-- > 0)
	{
		str[i] = num % 10 + '0';
		num = num / 10;
	}
	if (negativo)
		str[0] = '-';
	return (str + '\0');
}

int main() {
    long int num = 1234567890123456789;
    char *str = ft_itoa(num);

    if (str != NULL) {
        printf("O número passado foi : %ld\n", num);
		printf("O número formato ficou : %s\n", str);
        free(str); // Libera a memória alocada para a string
    } else {
        printf("Falha na alocação de memória.\n");
    }

    return 0;
}
