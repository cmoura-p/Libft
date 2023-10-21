/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:23:08 by marvin            #+#    #+#             */
/*   Updated: 2023/10/20 18:13:50 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (7);
	return (0);
}
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int c = 'a';
	printf("Is %c alphanumeric? %d\n", c, ft_isalnum(c));
	c = '1';
	printf("Is %c alphanumeric? %d\n", c, ft_isalnum(c));
	c = '$';
	printf("Is %c alphanumeric? %d\n", c, ft_isalnum(c));
	return 0;
}
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (14);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (28);
	return (0);
}
