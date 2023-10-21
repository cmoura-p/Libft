/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:25:51 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/20 21:02:18 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calcula o tamnho do ponteiro *str e retorna o valor

#include "libft.h"

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
#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *str = "Hello, BIG world!";
	size_t len = ft_strlen(str);
	printf("Length of '%s' is %zu\n", str, len);
	return 0;
}
