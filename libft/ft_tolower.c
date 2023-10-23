/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:10:23 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/22 01:19:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
	int c = 'z';
	printf("Before: %c\n", c);
	c = ft_tolower(c);
	printf("After: %c\n", c);
	return 0;
}
*/