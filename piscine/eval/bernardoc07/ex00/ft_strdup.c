/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:20:37 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 17:48:55 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*b;

	i = 0;
	b = (char *)malloc(sizeof(src));
	while (src[i] != '\0')
	{
		b[i] = src[i];
		++i;
	}
	return (b);
}

int	main(void)
{
	printf("%s", ft_strdup("ABCDEFGHIJK"));
}

