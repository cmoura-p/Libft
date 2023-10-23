/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:20:07 by marvin            #+#    #+#             */
/*   Updated: 2023/10/22 01:24:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (14);
	return (0);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
	int c = 'P';
	int result = ft_isalpha(c);
	printf("The result is: %d\n", result);
	return 0;
}
*/