/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:46:42 by rapcampo          #+#    #+#             */
/*   Updated: 2023/08/10 18:31:56 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

int	ft_strlen_total(char **str, char *sep, int size)
{
	int	i;
	int	total_len;
	int	sep_len;

	i = -1;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (++i < size)
	{
		total_len += ft_strlen(str[i]);
		total_len += sep_len;
	}
	total_len -= sep_len;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s1;
	int		i;
	int		j;
	int		c;

	s1 = malloc(sizeof(char) * (ft_strlen_total(strs, sep, size) + 1));
	i = -1;
	c = 0;
	if (size <= 0)
		return (malloc(sizeof(strs)));
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			s1[c++] = strs[i][j++];
		j = 0;
		while ((sep[j]) && i != (size -1))
			s1[c++] = sep[j++];
	}
	s1[c] = '\0';
	return (s1);
}

#include <stdio.h>

int	main(void)
{
	char **strs;
	char *separator;
	char *result;
	int	size;

	size = 3;
	strs = malloc(3 * sizeof(char *));
	strs[0] = malloc(sizeof(char) * (5 + 1));
	strs[1] = malloc(sizeof(char) * (3 + 1));
	strs[2] = malloc(sizeof(char) * (6 + 1));
	strs[0] = "hello";
	strs[1] = "this is";
	strs[2] = "a test";
	separator = ":|_|_|:";
	result = ft_strjoin(size, strs, separator);
	printf("%s\n", result);
	free(result);
}
