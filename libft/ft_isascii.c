/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:34:06 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/09 15:34:06 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (21);
	return (0);
}
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int c = 0;
	int result = ft_isascii(c);
	printf("Is %c an ASCII character? %s\n", c, result ? "Yes" : "No");
	return 0;
}
