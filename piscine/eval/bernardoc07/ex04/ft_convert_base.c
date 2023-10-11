/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpaiva-x <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:20:37 by bpaiva-x          #+#    #+#             */
/*   Updated: 2023/08/10 17:56:44 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*look(char *base_to, int e, int *n, char *nbr);

int	go(char *a)
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

int	find(char *a, char b)
{
	int		c;

	c = 0;
	while (a[c] != '\0')
	{
		if (a[c] == b)
		{
			return (c);
		}
		++c;
	}
	return (-1);
}

int	reade(char *a, char *b, int *c)
{
	int		e;
	int		f;
	int		h;

	e = 0;
	h = 0;
	f = go(a);
	while (b[*c] != '\0')
	{
		e = find(a, b[*c]);
		h = (h + e);
		if (b[*c + 1] != '\0')
			h = h * f;
		++(*c);
	}
	return (h);
}

int	neg(int n, char *str, int e, int *c)
{
	while (str[e] == '+' || str[e] == '-')
	{
		if (str[e] == '-')
		{
			n = n * (-1);
		}
		++e;
	}
	*c = e;
	return (n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		e;
	int		*c;
	int		n;

	e = 0;
	n = 1;
	c = &e;
	if (go(base_from) == 0 || go(base_to) == 0)
	{
		return (0);
	}
	while (nbr[e] == 9 || nbr[e] == 10 
		|| nbr[e] == 11 || nbr[e] == 12
		|| nbr[e] == ' ')
		++e;
	if (neg(n, nbr, e, c) == -1)
		n = -1;
	e = n * reade(base_from, nbr, c);
	n = 1;
	nbr = malloc(11 * sizeof(char));
	nbr = look(base_to, e, &n, nbr);
	return (nbr);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*s;

	s = (char *) malloc(11 * sizeof(char));
	if (argc == 4)
	{
		s = ft_convert_base(argv[1], argv[2], argv[3]);
		printf("\n%s\n%s\n%s\n%s\n",argv[1], argv[2], argv[3], s);
	}
	return (0);
}

