/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:36:51 by rapcampo          #+#    #+#             */
/*   Updated: 2023/08/10 18:20:54 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	int		n;
	char	*dest;

	n = ft_strlen(src);
	dest = (char *)malloc((n + 1) * sizeof(char));
	if (dest == NULL)
		return ((void *) 0);
	ft_strcpy(dest, src);
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf("the source is :%s:\n", argv[1]);
	printf("the dupe of strdup is :%s:\n\n", strdup(argv[1]));
	printf("the dupe of ft_strdup is :%s:\n\n", ft_strdup(argv[1]));
	return (0);
}

