/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:20:37 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 09:15:15 by bpaiva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	finb(char *a)
{
	int		b;
	int		c;

	b = 0;
	while (a[b] != '\0')
	{
		if (a[b] == 9 || a[b] == 10 
			|| a[b] == 11 || a[b] == 12
			|| a[b] == ' ' || a[b] == '+' 
			|| a[b] == '-')
		{
			return (0);
		}
		c = b +1;
		while (a[c] != '\0')
		{
			if (a[b] == a[c])
			{
				return (0);
			}
			++c;
		}
		++b;
	}
	return (b);
}

char	nega(int	*f, char *nbr, char *base_to, int g)
{
	if (nbr[0] != '-' || *f == -2147483648)
	{
		if (*f == -2147483648)
		{
			nbr[0] = '-';
			nbr[1] = base_to[2];
			*f = 147483648;
			g = 2;
			return (nbr[0]);
		}
		if (*f < 0)
		{
			nbr[0] = '-';
			*f = -1 * *f;
			g = 1;
			return (nbr[0]);
		}
	}
	return (nbr[g]);
}

int	swap(char *base_to, int e, int *g, char *nbr)
{
	nbr[*g] = base_to[e];
	++*g;
	return (*g);
}

char	*look(char *base_to, int e, int *g, char *nbr)
{
	int		size;
	int		*f;

	f = &e;
	size = finb(base_to);
	if (e >= size || - e >= size)
	{
		nbr = look(base_to, e / size, g, nbr);
		nbr = look(base_to, e % size, g, nbr);
	}
	else
	{
		nbr[*g] = nega(f, nbr, base_to, *g);
		*g = swap(base_to, e, g, nbr);
	}
	return (nbr);
}
