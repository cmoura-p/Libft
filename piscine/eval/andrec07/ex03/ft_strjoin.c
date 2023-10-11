/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:02:46 by andreda-          #+#    #+#             */
/*   Updated: 2023/08/08 21:56:51 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_arraylen(char **str, int size)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (size > 0)
	{
		while (str[size - 1][x++] != '\0')
			i++;
		size--;
		x = 0;
	}
	return (i);
}

int	ft_strlen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*s;

	s = (char *)malloc(sizeof(char) * 
			(ft_arraylen(strs, size) + (ft_strlen(sep) * size) + 1));
	j = 0;
	c = 0;
	i = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
			s[c++] = strs[j][i++];
		i = 0;
		while (sep[i] != '\0' && j < size - 1)
			s[c++] = sep [i++];
		j++;
	}
	s[c] = '\0';
	return (s);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	//(void)argc;
	//(void)argv;
	//char *a[] = {"aaaa", "aaaa", "aaaa"};
	//char b[] = ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";
	
	if(argc > 1)
		printf("%s\n", ft_strjoin(argc - 2, (argv + 2), argv[1])); 
}
