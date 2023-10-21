/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:34:43 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/09 15:34:43 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (28);
	return (0);
}
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int c = 'A';
	int result = ft_isdigit(c);
	printf("Is %c a digit? %s\n", c, result ? "Yes" : "No");
	return 0;
}
