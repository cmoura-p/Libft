/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:46:14 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/22 01:41:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/*#include "libft.h"
#include <stdio.h>

void print_char(unsigned int i, char *c)
{
	printf("Index %d: %c\n", i, *c);
}

int main(void)
{
	char str[] = "Hello, world!";
	ft_striteri(str, &print_char);
	return 0;
}
*/