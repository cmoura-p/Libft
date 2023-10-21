/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:09:14 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/21 20:23:15 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int c = 'a';
	printf("Before: %c\n", c);
	c = ft_toupper(c);
	printf("After: %c\n", c);
	return 0;
}
