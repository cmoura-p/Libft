/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:53:49 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/20 18:25:20 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (35);
	return (0);
}
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int c = 'A';
	printf("Is %c printable? %d\n", c, ft_isprint(c));
	c = '\n';
	printf("Is newline printable? %d\n", ft_isprint(c));
	c = 0;
	printf("Is null printable? %d\n", ft_isprint(c));
	return 0;
}
