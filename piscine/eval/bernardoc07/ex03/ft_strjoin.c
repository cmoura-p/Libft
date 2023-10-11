/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:20:37 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 17:54:25 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	overright(char *a, int b, char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		a[b] = c[i];
		++i;
		++b;
	}
	return (b);
}

int	sizez(char **a, char *b, int i)
{
	int		e;
	int		size;

	e = 0;
	size = 0;
	while (a[i] != NULL)
	{
		while (a[i][e] != '\0')
		{
			++size;
			++e;
		}
		e = 0;
		while (b[e] && a[i + 1] != NULL)
		{
			++size;
			++e;
		}
		e = 0;
		++i;
	}
	return (size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*stand;
	int		med;
	int		i;
	int		e;

	i = 0;
	e = 0;
	med = sizez(strs, sep, i);
	stand = malloc(sizeof(char) * med);
	while (e < size)
	{
		i = overright(stand, i, strs[e]);
		if (strs[e + 1] != NULL)
		{
			i = overright(stand, i, sep);
		}
		++e;
	}
	return (stand);
}

int	main(void)
{
	char	**traits;
	char	space[] = "  ";
	
	traits = malloc(sizeof(char *) * 10);
	traits[0] = "Patience";
	traits[1] = "Bravery";
	traits[2] = "Integrity";
	traits[3] = "Perseverance";
	traits[4] = "Kindeness";
	traits[5] = "Justice";
	traits[6] = "Determination";
	traits[7] = "Hope";
	traits[8] = "Hate";
	traits[9] = "Fear";
	printf("%s", ft_strjoin(10, traits, space));
}

